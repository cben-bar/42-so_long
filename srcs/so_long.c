/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:41:27 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/02 20:40:24 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int ac, char **av)
{
	t_data	*data;

	ft_error_finder(ac, av[1]);
	data = ft_init_map(av);
	ft_check_map(data);
	ft_init_win(&data->mlx, &data->win, data);
	data->img = mlx_new_image(data->mlx, 500, 500);
	data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel, &data->line_length, &data->endian);
	data->img = ft_init_image(data);
	ft_run(data);
	mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
//	mlx_put_image_to_window(data->mlx, data->win, data->img->player, 100, 100);
	mlx_hook(data->win, 2, 0, ft_key_events, NULL);
	mlx_hook(data->win, 17, 0, ft_close_mouse, NULL);
	mlx_loop(data->mlx);
	ft_clear_leaks(data);
	return (EXIT_SUCCESS);
}
