/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:21:24 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/25 13:41:06 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int		ft_error_finder(int nb_params, const char *file_name)
{
	if (nb_params < 2)
		ft_exit("Too few arguments");
	if (nb_params > 2)
		ft_exit("Too arguments");
	if (!ft_check_path_to_dir(file_name))
		ft_exit("Path to a directory");
	if (!ft_check_file(file_name))
		ft_exit("Invalid file");
	if (!ft_check_extension(file_name))
		ft_exit("Invalid extension");
	return (1);
}
