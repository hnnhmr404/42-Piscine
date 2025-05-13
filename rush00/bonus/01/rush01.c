/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le-chan <le-chan@student.42iskandarpu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:41:40 by le-chan           #+#    #+#             */
/*   Updated: 2025/04/13 17:45:19 by le-chan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_column(int numcol, char firltr, char midltr, char lastltr)
{
	int	i;

	i = 1;
	while (i <= numcol)
	{
		if (i == 1)
			ft_putchar(firltr);
		else if (i == numcol)
			ft_putchar(lastltr);
		else
			ft_putchar(midltr);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	column;
	int	line;

	i = 1;
	column = x;
	line = y;
	if (column >= 1 && line >= 1)
	{
		while (i <= line)
		{
			if (i == 1)
				print_column(column, '/', '*', '\\');
			else if (i == line)
				print_column(column, '\\', '*', '/');
			else
				print_column(column, '*', ' ', '*');
			i++;
		}
	}
}
