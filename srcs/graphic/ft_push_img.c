/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:49:30 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/07 19:54:29 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_push_img(t_data *data, t_image *img, void **mlx, void **win)
{
	size_t	x;
	size_t	y;

	y = 0;
	ft_player_pos(&data);
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if (data->map_line[y][x] == '1')
				mlx_put_image_to_window(*mlx, *win, img->wa, x * 100, y * 100);
			if (data->map_line[y][x] == 'P')
				mlx_put_image_to_window(*mlx, *win, img->pl, x * 100, y * 100);
			if (data->map_line[y][x] == 'E')
				mlx_put_image_to_window(*mlx, *win, img->ex, x * 100, y * 100);
			if (data->map_line[y][x] == 'C')
				mlx_put_image_to_window(*mlx, *win, img->co, x * 100, y * 100);
			if (data->map_line[y][x] == '0')
				mlx_put_image_to_window(*mlx, *win, img->em, x * 100, y * 100);
			x++;
		}
		y++;
	}
}
