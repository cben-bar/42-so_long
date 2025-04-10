/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:21:24 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/01 13:56:16 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_error_finder(int nb_params, const char *file_name)
{
	if (nb_params < 2)
		ft_error_exit("Too few arguments");
	if (nb_params > 2)
		ft_error_exit("Too arguments");
	if (!ft_check_path_to_dir(file_name))
		ft_error_exit("Path to a directory");
	if (!ft_check_file(file_name))
		ft_error_exit("Invalid file");
	if (!ft_check_extension(file_name))
		ft_error_exit("Invalid extension");
}
