/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_intruder.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:20:38 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 20:04:15 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_bool	ft_check_map_intruder(t_data *data, const char *charset)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if (!ft_check_charset(data->map_line[y][x], charset))
				return (false);
			x++;
		}
		y++;
	}
	return (true);
}
