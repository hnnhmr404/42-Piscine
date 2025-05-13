/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaw <zlaw@student.42ip.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:55:28 by zlaw              #+#    #+#             */
/*   Updated: 2025/04/20 18:58:50 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
		{
			while (i > 0)
			{
				free(table[i - 1]);
				i--;
			}
			free(table);
			return (NULL);
		}
		i++;
	}
	return (table);
}

char	**create_board(void)
{
	char	**board;
	int		i;
	int		j;

	board = memory_allocation(6, 6);
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	return (board);
}

void	free_board(char **board, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(board[i]);
		i++;
	}
	free(board);
}
