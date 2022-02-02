/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_win.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:05:47 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/02 15:08:02 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_init_win(void **mlx, void **mlx_win, t_data *data)
{
	int	x;
	int	y;

	if (data->x_max <= W)
		x = data->x_max * 100;
	else
		x = W * 100;
	if (data->y_max <= H)
		y = data->y_max * 100;
	else
		y = H * 100;
	*mlx = mlx_init();
	*mlx_win = mlx_new_window(*mlx, x, y, "so_long");
}
