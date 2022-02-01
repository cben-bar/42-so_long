/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adapt_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:08:05 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/01 20:08:42 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	init_window(void **mlx, void **mlx_win, t_data *data)
{
	int	x;
	int	y;

	if (data->x_max <= WIDTH)
		x = data->x_max * 100;
	else
		x = WIDTH * 100;
	if (data->y_max <= HEIGHT)
		y = data->y_max * 100;
	else
		y = HEIGHT * 100;
	*mlx = mlx_init();
	*mlx_win = mlx_new_window(*mlx, x, y, "SO_LONG");
}
