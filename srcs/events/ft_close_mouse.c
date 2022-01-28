/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_mouse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:25:07 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 18:41:26 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_close_mouse(t_vars vars)
{
	(void)vars;
	{
		printf("✌️  Bye!\n");
		exit(EXIT_SUCCESS);
	}
	return (0);
}
