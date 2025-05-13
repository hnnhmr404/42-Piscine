/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surajend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:07:26 by surajend          #+#    #+#             */
/*   Updated: 2025/04/20 17:06:41 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	mark_success(char **puzzle_board)
{
	puzzle_board[0][0] = '1';
	return (1);
}

void	print_solution(char **puzzle_board)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 5)
	{
		j = 1;
		while (j <= 5)
		{
			ft_putchar(puzzle_board[i][j]);
			j++;
			if (j != 6)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
