/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 09:56:48 by jose-vda          #+#    #+#             */
/*   Updated: 2025/08/20 11:49:51 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	ft_free_all(t_fdf *tab)
{
	int	i;

	i = -1;
	if (tab->img.img)
		mlx_destroy_image(tab->mlx_ptr, tab->img.img);
	if (tab->win_ptr)
		mlx_destroy_window(tab->mlx_ptr, tab->win_ptr);
	if (tab->mlx_ptr)
		mlx_destroy_display(tab->mlx_ptr);
	free(tab->mlx_ptr);
	if (!tab->map)
		return ;
	while (++i < tab->map->height)
		free(tab->map->points[i]);
	free(tab->map->points);
	free(tab->map);
}

static int	close_window(t_fdf *tab)
{
	ft_free_all(tab);
	exit(0);
	return (0);
}

static void	ft_setup(t_fdf *tab, char **av)
{
	tab->z_scale = 3.0f;
	tab->x_scale = 250;
	tab->y_scale = 250;
	tab->zoom = 20;
	tab->mlx_ptr = mlx_init();
	tab->map = ft_read_map(av[1]);
	tab->img.width = W_WIDTH;
	tab->img.height = W_HEIGHT;
	tab->win_ptr = mlx_new_window(tab->mlx_ptr, W_WIDTH, W_HEIGHT, av[1]);
	tab->img.img = mlx_new_image(tab->mlx_ptr, tab->img.width, tab->img.height);
	tab->img.data = mlx_get_data_addr(tab->img.img, &tab->img.pixel_bits,
			&tab->img.line_bytes, &tab->img.endian);
}

static int	ft_event(int keycode, t_fdf *tab)
{
	if (keycode == 53 || keycode == 65307)
		exit((ft_free_all(tab), -1));
	else if (keycode == XK_w)
		tab->y_scale -= 10;
	else if (keycode == XK_s)
		tab->y_scale += 10;
	else if (keycode == XK_d)
		tab->x_scale += 10;
	else if (keycode == XK_a)
		tab->x_scale -= 10;
	else if (keycode == 61 || keycode == 65451)
		tab->zoom += 1;
	else if ((keycode == 45 || keycode == 65453) && tab->zoom >= 1)
		tab->zoom -= 1;
	else if (keycode == XK_r)
		tab->z_scale += 1.0;
	else if (keycode == XK_f && tab->z_scale > 3.0f)
		tab->z_scale -= 1.0;
	ft_draw_map(tab);
	if (!tab->map)
		return (ft_free_all(tab), -1);
	mlx_put_image_to_window(tab->mlx_ptr, tab->win_ptr, tab->img.img, 0, 0);
	return (0);
}

int	main(int ac, char **av)
{
	static t_fdf	tab;
	int				len;

	if (ac != 2)
		return (write(2, "Invalid arguments!\n", 20));
	len = ft_strlen(av[1]);
	if (len < 4 || ft_strncmp(&av[1][len - 4], ".fdf", 4) || ft_strchr(av[1],
			'.') != &av[1][len - 4])
		return (write(2, "Invalid map!\n", 14));
	ft_setup(&tab, av);
	ft_draw_map(&tab);
	if (!tab.map)
		return (ft_free_all(&tab), -1);
	mlx_put_image_to_window(tab.mlx_ptr, tab.win_ptr, tab.img.img, 0, 0);
	mlx_hook(tab.win_ptr, 2, (1L << 0), ft_event, &tab);
	mlx_hook(tab.win_ptr, 17, 0, close_window, &tab);
	mlx_loop(tab.mlx_ptr);
	return (0);
}
