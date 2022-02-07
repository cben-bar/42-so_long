/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:27:30 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/07 19:58:23 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_run(t_data *data, t_image *img)
{
	ft_push_img(data, img, &data->mlx, &data->win);
	mlx_hook(data->win, 2, 0, ft_key_events, data);
	mlx_hook(data->win, 17, 0, ft_close_mouse, NULL);
}
