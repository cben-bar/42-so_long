/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_just_one_p.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:38:42 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/01 18:49:14 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_bool	ft_check_map_just_one_p(t_data *data)
{
	size_t	y;
	size_t	x;
	size_t	counter;

	counter = 0;
	y = 0;
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if (data->map_line[y][x] == 'P')
				counter++;
			x++;
		}
		y++;
	}
	if (counter != 1)
		return (0);
	return (1);
}		
