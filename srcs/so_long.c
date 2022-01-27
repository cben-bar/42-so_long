/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:41:27 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/27 18:53:36 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_win_action(int keycode, t_vars vars)
{
	if (keycode == KEY_ESC)
	{
	//	mlx_destroy_image(vars.mlx, vars.img.img);
	//	vars.img.addr = NULL;
		mlx_destroy_window(vars.mlx, vars.win);
		exit(EXIT_SUCCESS);
	}
	return (0);
}

int	main(int argc, char **argv)
{
//	char	*relative_path = "../img/blopblop.xpm";
//	int		img_width = 4;
//	int		img_height = 4;
	t_vars	vars;

	ft_error_finder(argc, argv[1]);
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1000, 1000, "so_long");
	vars.img.img = mlx_new_image(vars.mlx, 500, 500);
	vars.img.addr = mlx_get_data_addr(vars.img.img, &vars.img.bits_per_pixel, &vars.img.line_length, &vars.img.endian);
	ft_my_mlx_pixel_put(&vars.img, 5, 5, 0x00FF0000);
//	vars.img.img = mlx_xpm_file_to_image(vars.mlx, relative_path, &img_width, &img_height);
	mlx_put_image_to_window(vars.mlx, vars.win, vars.img.img, 0, 0);
	mlx_key_hook(vars.win, ft_win_action, &vars);
//	mlx_hook(vars.win, 2, 1L<<0, ft_win_action, &vars);
	mlx_loop(vars.mlx);
}
