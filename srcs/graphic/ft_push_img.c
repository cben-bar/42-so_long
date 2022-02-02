/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:47:58 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/02 21:08:26 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static size_t	get_camx(t_data *data)
{
	if (data->x_max < W)
		return (0);
	if ((int)data->x - W / 2 <= 0)
		return (0);
	else if (data->x + W / 2 >= data->x_max)
		return (data->x_max - W);
	return (data->x - W / 2);
}

static size_t	get_camy(t_data *data)
{
	if (data->y_max < H)
		return (0);
	if ((int)data->y - H / 2 <= 0)
		return (0);
	else if (data->y + H / 2 >= data->y_max)
		return (data->y_max - H);
	return (data->y - H / 2);
}

void	ft_push_img(t_data *data, t_image *img)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	y;
	void	*tmp;

	ft_player_pos(data);
	i = 0;
	while (i < H && i < data->y_max)
	{
		j = 0;
		while (j < W && j < data->x_max)
		{
			tmp = img->empty;
			mlx_put_image_to_window(data->mlx, data->win, tmp, j * 100, i * 100);
			y = get_camy(data) + i;
			x = get_camx(data) + j;
	//		tmp = get_img(data->map_line[y][x], img);
	//		mlx_put_image_to_window(*mlx, *win, tmp, j * 100, i * 100);
			j++;
		}
		i++;
	}
}
