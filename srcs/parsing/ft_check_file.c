/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:30:22 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/25 13:45:47 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_check_file(const char *file_name)
{
	int		fd;
	int		rv;
	int		buffer[1];
	
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	rv = read(fd, buffer, 1);
	if (rv < 1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}
