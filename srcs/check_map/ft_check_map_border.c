/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_border.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:57:32 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/01 19:15:28 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_bool	ft_check_map_border(t_data *data)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if ((y == 0 || y == data->y_max -1) && data->map_line[y][x] != '1')
				return (false);
			if ((x == 0 || x == data->x_max -1) && data->map_line[y][x] != '1')
				return (false);
			x++;
		}
		y++;
	}
	return (true);
}
