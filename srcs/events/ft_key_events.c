/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:46:06 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/07 19:48:52 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_key_events(int keycode, t_data *data)
{
	ft_player_pos(&data);
	if (keycode == KEY_UP)
		ft_up(&data);
	if (keycode == KEY_DWN)
		ft_down(&data);
	if (keycode == KEY_L)
		ft_l(&data);
	if (keycode == KEY_R)
		ft_r(&data);
	else if (keycode == KEY_ESC)
		ft_close_key();
	ft_push_img(data, data->img, &data->mlx, &data->win);
	return (0);
}
