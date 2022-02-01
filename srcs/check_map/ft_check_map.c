/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:48:32 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/01 19:49:26 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_check_map(t_data *data)
{
	if (!ft_check_map_intruder(data, "1PEC0"))
		ft_error_exit("Map contains invalid characters");
	if (!ft_check_map_everybody_is_here(data, "1PEC"))
		ft_error_exit("Map does not contain all the required characters");
	if (!ft_check_map_just_one_p(data))
		ft_error_exit("Only one player is neded");
	if (!ft_check_map_border(data))
		ft_error_exit("Invalid map border");
}
