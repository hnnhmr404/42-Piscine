/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_view1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaw <zlaw@student.42ip.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:48:45 by zlaw              #+#    #+#             */
/*   Updated: 2025/04/20 02:53:55 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	get_clue(char **board, int fixed, int is_row, int is_reverse)
{
	if (is_row)
	{
		if (is_reverse)
			return (board[fixed][5]);
		return (board[fixed][0]);
	}
	if (is_reverse)
		return (board[5][fixed]);
	return (board[0][fixed]);
}

char	get_board_value(char **board, int fixed, int i, int is_row)
{
	if (is_row)
		return (board[fixed][i]);
	return (board[i][fixed]);
}

void	init_loop_vars(int *i, int *end, int *step, int is_reverse)
{
	if (is_reverse)
	{
		*i = 4;
		*end = 1;
		*step = -1;
	}
	else
	{
		*i = 1;
		*end = 4;
		*step = 1;
	}
}

char	calc_visible(char **board, int fixed, int is_row, int is_reverse)
{
	int		i;
	int		end;
	int		step;
	char	highest;
	char	visible;

	init_loop_vars(&i, &end, &step, is_reverse);
	highest = get_board_value(board, fixed, i, is_row);
	visible = '1';
	while ((step == 1 && i <= end) || (step == -1 && i >= end))
	{
		if (get_board_value(board, fixed, i, is_row) > highest)
		{
			highest = get_board_value(board, fixed, i, is_row);
			visible++;
		}
		i += step;
	}
	return (visible);
}

int	is_correct_view(char **board, int fixed, int is_row, int is_reverse)
{
	char	visible;
	int		clue;

	visible = calc_visible(board, fixed, is_row, is_reverse);
	clue = get_clue(board, fixed, is_row, is_reverse);
	return (clue == visible);
}
