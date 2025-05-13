/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:07:53 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 16:47:30 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_in_row(char **puzzle_board, int row, int column, int digit)
{
	int	i;

	i = 1;
	while (i < column)
	{
		if (puzzle_board[row][i] == digit + '0')
			return (1);
		i++;
	}
	return (0);
}

int	is_in_column(char **puzzle_board, int row, int column, int digit)
{
	int	i;

	i = 1;
	while (i < row)
	{
		if (puzzle_board[i][column] == digit + '0')
			return (1);
		i++;
	}
	return (0);
}

int	is_correct_row(char **board, int row)
{
	return ((is_correct_left_view(board, row))
		&& (is_correct_right_view(board, row)));
}

int	is_correct_col(char **board, int col)
{
	return ((is_correct_top_view(board, col))
		&& (is_correct_bottom_view(board, col)));
}
