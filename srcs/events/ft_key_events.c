/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:46:06 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/09 16:02:17 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	ft_display(t_data *data)
{
	char	*moves_display;
	char	*s;

	ft_push_img(data, data->img, &data->mlx, &data->win);
	s = ft_itoa(data->mv_counter);
	moves_display = ft_strjoin("Move: ", s);
	free(s);
	mlx_string_put(data->mlx, data->win, 200, 200, 0x00ECA3F5, moves_display);
	free(moves_display);
}

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
	if (keycode == KEY_UP || keycode == KEY_DWN
		|| keycode == KEY_L || keycode == KEY_R)
		ft_display(data);
	return (0);
}
