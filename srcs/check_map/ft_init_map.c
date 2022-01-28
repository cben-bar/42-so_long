/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:08:51 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 20:50:10 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_data	*ft_init_map(char **av)
{
	int		fd;
	t_data	*data;
	t_data	*ret;
	size_t	i;

	i = 0;
	fd = open(av[1], O_RDONLY);
	data = malloc(sizeof(t_data));
	if (!data || fd == -1)
		ft_error_exit("Initialisation failure");
	ret = ft_map_filler(fd, data);
	ret->x_max = ft_strlen(data->map_line[0]);
	ret->y_max = ft_check_y_max(data->map_line);
	return (ret);
}
