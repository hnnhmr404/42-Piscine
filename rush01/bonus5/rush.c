/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaw <zlaw@student.42ip.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:12:07 by zlaw              #+#    #+#             */
/*   Updated: 2025/04/20 17:16:05 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	exec_row_four(char **board, int row, int col)
{
	if (is_correct_row(board, row))
		solve_recursive(board, row + 1, 1);
	if (row == 5 && is_correct_col(board, col))
	{
		mark_success(board);
		print_solution(board);
	}
}

void	solve_recursive(char **board, int row, int col)
{
	int	i;

	i = 1;
	while (i <= 5 && row <= 5 && col <= 5 && board[0][0] != '1')
	{
		if (!is_in_column(board, row, col, i) && !is_in_row(board, row, col, i))
		{
			board[row][col] = i + '0';
			if (row == 5 && !is_correct_top_view(board, col))
				break ;
			if (col == 5)
				exec_row_four(board, row, col);
			else
				solve_recursive(board, row, col + 1);
		}
		i++;
	}
}

void	rush(char **clues)
{
	char	**board;

	board = create_board();
	set_clues(board, clues);
	solve_recursive(board, 1, 1);
	if (board[0][0] == '0')
	{
		print_error();
	}
}
