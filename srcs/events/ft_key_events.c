/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:44:01 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 18:41:40 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_key_events(int keycode, t_vars vars)
{
	(void)vars;
	if (keycode == KEY_ESC)
	{
		printf("✌️  Bye!\n");
		exit(EXIT_SUCCESS);
	}
	return (0);
}
