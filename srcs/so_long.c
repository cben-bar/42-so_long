/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:41:27 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 18:38:42 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int ac, char **av)
{
	int		img_width = 4;
	int		img_height = 4;
	t_vars	vars;
	t_data	*data;

	ft_error_finder(ac, av[1]);
	data = ft_init_map(av);
//	ft_check_map(data);
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 2000, 1000, "so_long");
	vars.img.img = mlx_new_image(vars.mlx, 500, 500);
	vars.img.addr = mlx_get_data_addr(vars.img.img, &vars.img.bits_per_pixel, &vars.img.line_length, &vars.img.endian);
//	vars.img.img = mlx_xpm_file_to_image(vars.mlx, WALL_PATH, &img_width, &img_height);
//	vars.img.img = mlx_xpm_file_to_image(vars.mlx, EMPTY_PATH, &img_width, &img_height);
	vars.img.img = mlx_xpm_file_to_image(vars.mlx, P_PATH, &img_width, &img_height);
//	vars.img.img = mlx_xpm_file_to_image(vars.mlx, EXIT_PATH, &img_width, &img_height);
//	vars.img.img = mlx_xpm_file_to_image(vars.mlx, C_PATH, &img_width, &img_height);
	mlx_put_image_to_window(vars.mlx, vars.win, vars.img.img, 0, 0);
	mlx_hook(vars.win, 2, 0, ft_key_events, &vars);
	mlx_hook(vars.win, 17, 0, ft_close_mouse, &vars);
	mlx_loop(vars.mlx);
}
