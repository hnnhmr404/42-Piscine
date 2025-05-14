/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idk.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:52:31 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 17:53:10 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// header.h
#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_error(void);
void	ft_putchar(char c);
void	print_solution(char **board, int n);
char	**memory_allocation(int rows, int cols);
char	**create_board(int n);
char	**convert_in_array(char *str, int n);
int	is_correct_params(char *str, int n);
void	set_clues(char **board, char **clues, int n);
void	rush(char **clues);
void	solve_recursive(char **board, int row, int col, int n);
int	is_in_row(char **board, int row, int col, int digit, int n);
int	is_in_column(char **board, int row, int col, int digit, int n);
int	is_correct_row(char **board, int row, int n);
int	is_correct_col(char **board, int col, int n);
int	is_correct_view(char **board, int fixed, int is_row, int is_reverse, int n);
char	get_board_value(char **board, int fixed, int i, int is_row);
int	get_clue(char **board, int fixed, int is_row, int is_reverse, int n);
char	calc_visible(char **board, int fixed, int is_row, int is_reverse, int n);
void	init_loop_vars(int *i, int *end, int *step, int is_reverse, int n);
int	mark_success(char **board);
int	get_board_size_from_arg(char *str);
int	get_board_size_from_board(char **board);

#endif

// main.c

int	get_board_size_from_arg(char *str)
{
	int n = atoi(str);
	if (n >= 4 && n <= 9)
		return (n);
	return (-1);
}

int	main(int argc, char **argv)
{
	int		 n;
	char	**clues;

	if (argc != 3)
	{
		print_error();
		return (1);
	}

	n = get_board_size_from_arg(argv[1]);
	if (n == -1)
	{
		print_error();
		return (1);
	}

	clues = convert_in_array(argv[2], n);
	if (!clues || !is_correct_params(argv[2], n))
	{
		print_error();
		return (1);
	}
	rush(clues);
	return (0);
}

// utils.c

void	ft_putchar(char c)
{(board, row, col, i, n
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	mark_success(char **board)
{
	board[0][0] = '1';
	return (1);
}

void	print_solution(char **board, int n)
{
	int i, j;
	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			ft_putchar(board[i][j]);
			if (j != n)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int get_board_size_from_board(char **board)
{
	int size = 0;
	while (board[size])
		size++;
	return (size - 2); // subtract borders
}

// memory.c

char	**memory_allocation(int rows, int cols)
{
	char	**table;
	int		i;
	table = (char **)malloc(sizeof(char *) * rows);
	if (!table)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		table[i] = (char *)malloc(sizeof(char) * cols);
		if (!table[i])
			return (NULL);
		i++;
	}
	return (table);
}

char	**create_board(int n)
{
	char	**board;
	int		i, j;

	board = memory_allocation(n + 2, n + 2);
	i = 0;
	while (i < n + 2)
	{
		j = 0;
		while (j < n + 2)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	return (board);
}

// clues.c

void	set_clues(char **board, char **clues, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		board[0][i + 1] = clues[0][i];
		board[n + 1][i + 1] = clues[1][i];
		board[i + 1][0] = clues[2][i];
		board[i + 1][n + 1] = clues[3][i];
		i++;
	}
}

char	**convert_in_array(char *str, int n)
{
	char	**clues;
	int		i = 0, j = 0, k = 0;

	clues = memory_allocation(4, n);
	while (str[i] && j < 4)
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			clues[j][k++] = str[i];
			if (k == n)
			{
				j++;
				k = 0;
			}
		}
		i++;
	}
	return (clues);
}

int	is_correct_params(char *str, int n)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if ((str[i] >= '1' && str[i] <= '9') && (i % 2 == 0 || str[i - 1] == ' '))
			count++;
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (count == 4 * n);
}

// rush.c

void	exec_row_n(char **board, int row, int col, int n)
{
	if (is_correct_row(board, row, n))
		solve_recursive(board, row + 1, 1, n);
	if (row == n && is_correct_col(board, col, n))
	{
		mark_success(board);
		print_solution(board, n);
	}
}

void	solve_recursive(char **board, int row, int col, int n)
{
	int i;

	i = 1;
	while (i <= n && row <= n && col <= n && board[0][0] != '1')
	{
		if (!is_in_column(board, row, col, i, n) && !is_in_row(board, row, col, i, n))
		{
			board[row][col] = i + '0';
			if (row == n && !is_correct_view(board, col, 0, 0, n))
				break ;
			if (col == n)
				exec_row_n(board, row, col, n);
			else
				solve_recursive(board, row, col + 1, n);
		}
		i++;
	}
}

void	rush(char **clues)
{
	int n;
	char **board;

	n = 0;
	while (clues[0][n])
		n++;
	board = create_board(n);
	set_clues(board, clues, n);
	solve_recursive(board, 1, 1, n);
	if (board[0][0] == '0')
		print_error();
}

