/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_win.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:05:47 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/03 14:35:40 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_init_win(void **mlx, void **mlx_win, t_data *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
		x = data->x_max * 100;
		y = data->y_max * 100;
	*mlx = mlx_init();
	printf("mlx init ok\n");
	*mlx_win = mlx_new_window(*mlx, x, y, "so_long");
	printf("mlx new win ok\n");
	printf("x_max = %zu\n", data->x_max);
	printf("x = %d\n", x);
	printf("y_max = %zu\n", data->y_max);
	printf("y = %d\n", y);
}
