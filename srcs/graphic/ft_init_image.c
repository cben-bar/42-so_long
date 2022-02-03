/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:13:05 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/03 14:34:31 by cben-bar         ###   ########lyon.fr   */
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
	printf("wall = %p\n", ret->wall);
	printf("empty = %p\n", ret->empty);
	printf("collectible = %p\n", ret->collectible);
	printf("exit = %p\n", ret->exit);
	printf("player = %p\n", ret->player);
	ret->wall = mlx_xpm_file_to_image(data->mlx, WALL_PATH, &w, &h);
	ret->empty = mlx_xpm_file_to_image(data->mlx, EMPTY_PATH, &w, &h);
	ret->player = mlx_xpm_file_to_image(data->mlx, P_PATH, &w, &h);
	ret->collectible = mlx_xpm_file_to_image(data->mlx, C_PATH, &w, &h);
	ret->exit = mlx_xpm_file_to_image(data->mlx, EXIT_PATH, &w, &h);
	printf("init image OK\n");
	printf("wall = %p\n", ret->wall);
	printf("empty = %p\n", ret->empty);
	printf("collectible = %p\n", ret->collectible);
	printf("exit = %p\n", ret->exit);
	printf("player = %p\n", ret->player);
	return (ret);
}
