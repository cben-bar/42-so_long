/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:30:22 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 18:37:07 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_bool	ft_check_file(const char *file_name)
{
	int		fd;
	int		rv;
	int		buffer[1];
	
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (false);
	}
	rv = read(fd, buffer, 1);
	if (rv < 1)
	{
		close(fd);
		return (false);
	}
	close(fd);
	return (true);
}
