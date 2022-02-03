/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:49:30 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/03 14:23:06 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_push_img(t_data *data, t_image *img, void **mlx, void **win)
{
	size_t	x;
	size_t	y;

	y = 0;
	ft_player_pos(data);
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if (data->map_line[y][x] == '1')
				mlx_put_image_to_window(*mlx, *win, img->wall, x* 100, y * 100);
			if (data->map_line[y][x] == 'P')
				mlx_put_image_to_window(*mlx, *win, img->player, x * 100, y * 100);
			if (data->map_line[y][x] == 'E')
				mlx_put_image_to_window(*mlx, *win, img->exit, x * 100, y * 100);
			if (data->map_line[y][x] == 'C')
				mlx_put_image_to_window(*mlx, *win, img->collectible, x * 100, y * 100);
			if (data->map_line[y][x] == '0')
				mlx_put_image_to_window(*mlx, *win, img->empty, x * 100, y * 100);
			x++;
		}
		y++;
	}
}
