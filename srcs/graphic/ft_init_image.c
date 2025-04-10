/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:13:05 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/07 19:55:23 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_image	*ft_init_image(t_data *data)
{
	t_image	*ret;
	int		w;
	int		h;

	ret = malloc(sizeof(t_image));
	if (!ret)
		ft_error_exit("Image initialisation failure");
	ret->wa = mlx_xpm_file_to_image(data->mlx, WALL_PATH, &w, &h);
	ret->em = mlx_xpm_file_to_image(data->mlx, EMPTY_PATH, &w, &h);
	ret->pl = mlx_xpm_file_to_image(data->mlx, P_PATH, &w, &h);
	ret->co = mlx_xpm_file_to_image(data->mlx, C_PATH, &w, &h);
	ret->ex = mlx_xpm_file_to_image(data->mlx, EXIT_PATH, &w, &h);
	return (ret);
}
