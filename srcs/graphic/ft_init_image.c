/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:13:05 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/02 18:03:56 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_image	*ft_init_image(t_data *data)
{
	t_image	*ret;
	int		w;
	int		h;
	char	*s;

	ret = malloc(sizeof(t_image));
	if (!ret)
		ft_error_exit("Image initialisation failure");
	s = WALL_PATH;
	ret->wall = mlx_xpm_file_to_image(data->mlx, s, &w, &h);
	s = EMPTY_PATH;
	ret->wall = mlx_xpm_file_to_image(data->mlx, s, &w, &h);
//	ret->empty = mlx_xpm_file_to_image(data->mlx, EMPTY_PATH, &w, &h);
	s = P_PATH;
	ret->wall = mlx_xpm_file_to_image(data->mlx, s, &w, &h);
//	ret->player = mlx_xpm_file_to_image(data->mlx, P_PATH, &w, &h);
	s = C_PATH;
	ret->wall = mlx_xpm_file_to_image(data->mlx, s, &w, &h);
//	ret->collectible = mlx_xpm_file_to_image(data->mlx, C_PATH, &w, &h);
	s = EXIT_PATH;
	ret->wall = mlx_xpm_file_to_image(data->mlx, s, &w, &h);
//	ret->exit = mlx_xpm_file_to_image(data->mlx, EXIT_PATH, &w, &h);
	return (ret);
}
