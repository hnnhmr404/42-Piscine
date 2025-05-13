/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:29:28 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/13 17:29:37 by hbinti-d         ###   ########.fr       */
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
				print_column(column, 'A', 'B', 'A');
			else if (i == line)
				print_column(column, 'C', 'B', 'C');
			else
				print_column(column, 'B', ' ', 'B');
			i++;
		}
	}
}
