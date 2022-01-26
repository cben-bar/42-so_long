/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:21:49 by cben-bar          #+#    #+#             */
/*   Updated: 2022/01/24 14:41:47 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_check_extension(const char *file_name)
{
	size_t	i;

	i = ft_strlen(file_name);
	if ((file_name[i - 1] != 'r') && (file_name[i - 2] != 'e')
		&& (file_name[i - 3] != 'b') && (file_name[i - 4] != '.'))
		return (0);
	return (1);
}
