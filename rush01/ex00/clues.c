/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:54:15 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 18:56:49 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	set_clues(char **puzzle_board, char **clues)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 4)
	{
		puzzle_board[0][i] = clues[0][j];
		puzzle_board[5][i] = clues[1][j];
		puzzle_board[i][0] = clues[2][j];
		puzzle_board[i][5] = clues[3][j];
		i++;
		j++;
	}
}

int	is_correct_params(char **argv)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4' && i % 2 == 0)
			count++;
		else if (argv[1][i] != ' ')
			return (0);
		i++;
	}
	if (count == 16)
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
	clues = memory_allocation(4, 4);
	while (j < 4)
	{
		clues[0][j] = str[i];
		clues[1][j] = str[i + 8];
		clues[2][j] = str[i + 16];
		clues[3][j] = str[i + 24];
		j++;
		i += 2;
	}
	return (clues);
}
