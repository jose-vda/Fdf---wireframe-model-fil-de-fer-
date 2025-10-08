/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:01:14 by jose-vda          #+#    #+#             */
/*   Updated: 2025/08/19 10:00:27 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static t_point	ft_proj_iso(t_point p, t_fdf *fdf)
{
	t_point	projected;
	float	x;
	float	y;
	float	z;

	x = p.x * fdf->zoom;
	y = p.y * fdf->zoom;
	z = p.z * fdf->z_scale;
	projected.x = (x - y) * cos(ISO_ANGLE) + x + fdf->x_scale;
	projected.y = (x - y) * sin(ISO_ANGLE) - z + y + fdf->y_scale;
	return (projected);
}

static void	ft_draw_pxl(t_fdf *tab, int x, int y, int color)
{
	int	i;

	if ((x < 0 || x >= tab->img.width) || (y < 0 || y >= tab->img.height))
		return ;
	i = (x * tab->img.pixel_bits / 8) + (y * tab->img.line_bytes);
	tab->img.data[i] = color;
	tab->img.data[++i] = color >> 8;
	tab->img.data[++i] = color >> 16;
}

static void	ft_draw_line(t_point p1, t_point p2, t_fdf *fdf)
{
	t_alg	alg;

	alg.dx = abs(p2.x - p1.x);
	alg.dy = abs(p2.y - p1.y);
	alg.err = alg.dx - alg.dy;
	alg.sx = (p1.x < p2.x) - (p1.x > p2.x);
	alg.sy = (p1.y < p2.y) - (p1.y > p2.y);
	while (1)
	{
		ft_draw_pxl(fdf, p1.x, p1.y, 0x00FF00);
		if (p1.x == p2.x && p1.y == p2.y)
			break ;
		alg.e2 = 2 * alg.err;
		if (alg.e2 > -alg.dy)
		{
			alg.err -= alg.dy;
			p1.x += alg.sx;
		}
		if (alg.e2 < alg.dx)
		{
			alg.err += alg.dx;
			p1.y += alg.sy;
		}
	}
}

static void	ft_draw_background(t_fdf *tab, int color)
{
	int	x;
	int	y;

	y = -1;
	while (++y <= W_HEIGHT)
	{
		x = -1;
		while (++x <= W_WIDTH)
			ft_draw_pxl(tab, x, y, color);
	}
}

void	ft_draw_map(t_fdf *fdf)
{
	t_draw	d;

	d.y = -1;
	if (!fdf->map)
		return ;
	ft_draw_background(fdf, 0x181C26);
	while (++d.y < fdf->map->height)
	{
		d.x = -1;
		while (++d.x < fdf->map->width)
		{
			d.a = fdf->map->points[d.y][d.x];
			if (d.x < fdf->map->width - 1)
			{
				d.b = fdf->map->points[d.y][d.x + 1];
				ft_draw_line(ft_proj_iso(d.a, fdf), ft_proj_iso(d.b, fdf), fdf);
			}
			if (d.y < fdf->map->height - 1)
			{
				d.b = fdf->map->points[d.y + 1][d.x];
				ft_draw_line(ft_proj_iso(d.a, fdf), ft_proj_iso(d.b, fdf), fdf);
			}
		}
	}
}
