/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:40:51 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/09 12:07:58 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	ft_move(t_data **data, char *initial_pos, char *target_pos)
{
	if (*target_pos == 'E')
	{
		if ((*data)->c_counter != (*data)->c_max)
			return ;
		*initial_pos = '0';
		*target_pos = 'E';
		(*data)->mv_counter++;
		ft_close_key();
	}
	if (*target_pos == 'C')
	{
		*initial_pos = '0';
		*target_pos = 'P';
		(*data)->c_counter++;
		(*data)->mv_counter++;
	}
	else
	*initial_pos = '0';
	*target_pos = 'P';
	(*data)->mv_counter++;
}

void	ft_up(t_data **data)
{
	size_t	y;
	size_t	x;
	char	*target_pos;
	char	*initial_pos;

	x = (*data)->x;
	y = (*data)->y;
	initial_pos = &(*data)->map_line[y][x];
	target_pos = &(*data)->map_line[y - 1][x];
	if (*target_pos == '1')
		return ;
	ft_move(data, initial_pos, target_pos);
	printf("Moves: %zu\n", (*data)->mv_counter);
}

void	ft_down(t_data **data)
{
	size_t	y;
	size_t	x;
	char	*target_pos;
	char	*initial_pos;

	x = (*data)->x;
	y = (*data)->y;
	initial_pos = &(*data)->map_line[y][x];
	target_pos = &(*data)->map_line[y + 1][x];
	if (*target_pos == '1')
		return ;
	ft_move(data, initial_pos, target_pos);
	printf("Moves: %zu\n", (*data)->mv_counter);
}

void	ft_l(t_data **data)
{
	size_t	y;
	size_t	x;
	char	*initial_pos;
	char	*target_pos;

	x = (*data)->x;
	y = (*data)->y;
	initial_pos = &(*data)->map_line[y][x];
	target_pos = &(*data)->map_line[y][x - 1];
	if (*target_pos == '1')
		return ;
	ft_move(data, initial_pos, target_pos);
	printf("Moves: %zu\n", (*data)->mv_counter);
}

void	ft_r(t_data **data)
{
	size_t	y;
	size_t	x;
	char	*initial_pos;
	char	*target_pos;

	y = (*data)->y;
	x = (*data)->x;
	initial_pos = &(*data)->map_line[y][x];
	target_pos = &(*data)->map_line[y][x + 1];
	if (*target_pos == '1')
		return ;
	ft_move(data, initial_pos, target_pos);
	printf("Moves: %zu\n", (*data)->mv_counter);
}
