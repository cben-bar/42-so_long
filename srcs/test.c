/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:56:48 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/24 13:06:21 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main()
{
	void	*mlx;
	void	*mlx_win;
//	t_data	img;
//	char	*relative_path = "../img/cyberpunk-street.xpm";
//	int		img_width;
//	int		img_height;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 500, 500, "so_long");
//	img.img = mlx_new_image(mlx, 500, 500);
//	img.adrr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
//	mlx_pixel_put(&img, 5, 5, 0x00FF0000);
//	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
//	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	mlx_loop(mlx);
}
