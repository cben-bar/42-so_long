/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_win.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:05:47 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/07 19:49:44 by cben-bar         ###   ########lyon.fr   */
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
	*mlx_win = mlx_new_window(*mlx, x, y, "so_long");
}
