/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path_to_dir.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:46:16 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 18:35:24 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_bool	ft_check_path_to_dir(const char *file_name)
{
	int	fd;

	fd = open(file_name, O_DIRECTORY);
	if (fd == -1)
	{
		close(fd);
		return (true);
	}
	close(fd);
	return (false);
}
