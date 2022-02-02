/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_c_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:18:23 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/02 13:24:08 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

size_t	ft_check_c_max(t_data *data)
{
	size_t	y;
	size_t	x;
	size_t	c_max;

	c_max = 0;
	y = 0;
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if (data->map_line[y][x] == 'C')
				c_max++;
			x++;
		}
		y++;
	}
	return (c_max);
}
