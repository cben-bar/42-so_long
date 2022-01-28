/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:58:19 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 18:23:52 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_data	*ft_map_filler(int fd, t_data *data)
{
	char	*buffer;
	char	*tmp;
	char	*wait_list;

	while (1)
	{
		buffer = get_next_line(fd);
		if (buffer == NULL)
			break ;
		if (wait_list == NULL)
			wait_list = ft_strdup(buffer);
		else
		{
			tmp = wait_list;
			wait_list = ft_strjoin(tmp, buffer);
			free(tmp);
		}
		free(buffer);
	}
	data->map_line = ft_split(wait_list, '\n');
	free(wait_list);
	return (data);
}
