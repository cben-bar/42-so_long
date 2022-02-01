/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_everybody_is_here.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:04 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/01 13:41:03 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_bool	ft_check_map_everybody_is_here(t_data *data, const char *charset)
{
	size_t	x;
	size_t	y;
	size_t	seen;

	y = 0;
	seen = 0;
	while (y < data->y_max)
	{
		x = 0;
		while (x < data->x_max)
		{
			if (data->map_line[y][x] == charset[seen])
			{
				seen++;
				y = 0;
				x = 0;
			}
			x++;
		}
		y++;
	}
	if (seen == ft_strlen(charset))
		return (true);
	return (false);
}
