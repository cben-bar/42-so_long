/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_y_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:30:49 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 19:35:31 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

size_t	ft_check_y_max(char **map_line)
{
	size_t	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}
