/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_leaks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:40:32 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/02 13:44:59 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_clear_leaks(t_data *data)
{
	size_t	i;

	i = 0;
	while (data->map_line[i])
	{
		free(data->map_line[i]);
		i++;
	}
	free(data->map_line);
	free(data);
}
