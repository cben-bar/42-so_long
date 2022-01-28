/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:50:09 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/28 19:53:44 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_bool	ft_check_charset(char c, const char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (c != charset[i])
			return (false);
		i++;
	}
	return (true);
}
