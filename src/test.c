/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:56:48 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/21 16:59:35 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//include "../mlx/mlx.h"
#include "../include/so_long.h"

//# include <Cocoa/Cocoa.h>
//# include <OpenGL/gl3.h>
//# include <AppKit/NSOpenGLView.h>
//# include "../mlx/mlx_opengl.h"

int	main()
{
	void	*mlx;
	void	*mlx_win;
//	void	*img;
//	char	*relative_path = "../img/cyberpunk-street.xpm";
//	int		img_width;
//	int		img_height;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 500, 500, "so_long");
//	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	mlx_loop(mlx);
}
