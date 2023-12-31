/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brasenham2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:51:09 by tbelleng          #+#    #+#             */
/*   Updated: 2023/07/30 10:51:10 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3D.h"

void	third(t_data img, t_moh2f curr, t_moh2f next, int color)
{
	int		dy;
	int		dx;
	float	e;
	int		x;
	int		y;

	x = curr.x;
	y = curr.y;
	e = next.y - curr.y;
	dy = 2 * e;
	dx = 2 * (next.x - curr.x);
	while (1)
	{
		if (x < W_WIDTH && x > 0 && y < W_HEIGHT && y > 0)
			img_pixel_put(&img, x, y, color);
		if (y >= next.y)
			break ;
		y++;
		e += dx;
		if (e <= 0)
		{
			x--;
			e += dy;
		}
	}
}

void	fourth(t_data img, t_moh2f curr, t_moh2f next, int color)
{
	int		dy;
	int		dx;
	float	e;
	int		x;
	int		y;

	x = curr.x;
	y = curr.y;
	e = next.x - curr.x;
	dx = 2 * e;
	dy = 2 * (next.y - curr.y);
	while (1)
	{
		if (x < W_WIDTH && x > 0 && y < W_HEIGHT && y > 0)
			img_pixel_put(&img, x, y, color);
		if (x <= next.x)
			break ;
		x--;
		e += dy;
		if (e >= 0)
		{
			y++;
			e += dx;
		}
	}
}

void	eight(t_data img, t_moh2f curr, t_moh2f next, int color)
{
	int		dy;
	int		dx;
	float	e;
	int		x;
	int		y;

	x = curr.x;
	y = curr.y;
	e = next.x - curr.x;
	dx = 2 * e;
	dy = 2 * (next.y - curr.y);
	while (1)
	{
		if (x < W_WIDTH && x > 0 && y < W_HEIGHT && y > 0)
			img_pixel_put(&img, x, y, color);
		if (x >= next.x)
			break ;
		x++;
		e += dy;
		if (e < 0)
		{
			y--;
			e += dx;
		}
	}
}

void	seventh(t_data img, t_moh2f curr, t_moh2f next, int color)
{
	int		dy;
	int		dx;
	float	e;
	int		x;
	int		y;

	x = curr.x;
	y = curr.y;
	e = next.y - curr.y;
	dy = 2 * e;
	dx = 2 * (next.x - curr.x);
	while (1)
	{
		if (x < W_WIDTH && x > 0 && y < W_HEIGHT && y > 0)
			img_pixel_put(&img, x, y, color);
		if (y <= next.y)
			break ;
		y--;
		e += dx;
		if (e > 0)
		{
			x++;
			e += dy;
		}
	}
}
