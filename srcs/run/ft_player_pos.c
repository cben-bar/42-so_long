/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:34:16 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/02 20:43:48 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_player_pos(t_data *data)
{
	size_t	y;
	size_t	x;

	y = 0;
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if (data->map_line[y][x] == 'P')
			{
				data->y = y;
				data->x = x;
			}
			x++;
		}
		y++;
	}
}
