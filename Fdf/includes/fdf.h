/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:37:29 by jose-vda          #+#    #+#             */
/*   Updated: 2025/08/19 09:31:03 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include <X11/keysym.h>
# include <fcntl.h>
# include <math.h>
# include <stdlib.h>
# include <unistd.h>
# define ISO_ANGLE 0.53
# define W_WIDTH 1000
# define W_HEIGHT 800

typedef struct s_point
{
	int		x;
	int		y;
	int		z;
}			t_point;

typedef struct s_img
{
	char	*img;
	char	*data;
	int		pixel_bits;
	int		line_bytes;
	int		endian;
	int		width;
	int		height;
}			t_img;

typedef struct s_map
{
	t_point	**points;
	int		width;
	int		height;
}			t_map;

typedef struct s_fdf
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	img;
	t_map	*map;
	int		zoom;
	int		x_scale;
	int		y_scale;
	float	z_scale;
}			t_fdf;

typedef struct s_alg
{
	int		dx;
	int		dy;
	int		sx;
	int		sy;
	int		err;
	int		e2;
}			t_alg;

typedef struct s_draw
{
	int		x;
	int		y;
	t_point	a;
	t_point	b;
}			t_draw;

t_map		*ft_read_map(const char *file);
void		ft_draw_map(t_fdf *fdf);

#endif