/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:54:15 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/19 12:20:52 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	set_clues(char **puzzle_board, char **clues)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 5)
	{
		puzzle_board[0][i] = clues[0][j];
		puzzle_board[6][i] = clues[1][j];
		puzzle_board[i][0] = clues[2][j];
		puzzle_board[i][6] = clues[3][j];
		i++;
		j++;
	}
}

char	**memory_allocation(int rows, int columns)
{
	char	**table;
	int		i;

	i = 0;
	table = (char **)malloc(sizeof(char *) * rows);
	if (table == NULL)
		return (NULL);
	while (i < rows)
	{
		table[i] = (char *)malloc(sizeof(char) * columns);
		if (table[i] == NULL)
			return (NULL);
		i++;
	}
	return (table);
}

char	**create_board(void)
{
	char	**board;
	int		i;
	int		j;

	board = memory_allocation(7, 7);
	i = 0;
	while (i < 7)
	{
		j = 0;
		while (j < 7)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	return (board);
}

int	is_correct_params(char **argv)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '5' && i % 2 == 0)
			count++;
		else if (argv[1][i] != ' ')
			return (0);
		i++;
	}
	if (count == 20)
		return (1);
	return (0);
}

char	**convert_in_array(char *str)
{
	char	**clues;
	int		i;
	int		j;

	i = 0;
	j = 0;
	clues = memory_allocation(5, 5);
	while (j < 5)
	{
		clues[0][j] = str[i];
		clues[1][j] = str[i + 10];
		clues[2][j] = str[i + 20];
		clues[3][j] = str[i + 30];
		j++;
		i += 2;
	}
	return (clues);
}
