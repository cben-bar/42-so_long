/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:41:27 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/25 15:20:56 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*mlx_win;
//	char	*relative_path = "../img/blopblop.xpm";
//	int		img_width;
//	int		img_height;
	t_data	img;

	ft_error_finder(argc, argv[1]);
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 500, 500, "so_long");
	img.img = mlx_new_image(mlx, 500, 500);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	ft_my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
//	img.img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
