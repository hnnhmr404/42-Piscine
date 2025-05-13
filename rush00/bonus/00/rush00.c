/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrajan <shrajan@student.42iskandarpu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:27:37 by shrajan           #+#    #+#             */
/*   Updated: 2025/04/13 18:24:07 by shrajan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_column(char numcolumns, char firltr, char midltr, char lstltr)
{
	int	i;

	i = 1;
	while (i <= numcolumns)
	{
		if (i == 1)
			ft_putchar(firltr);
		else if (i == numcolumns)
			ft_putchar(lstltr);
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
				print_column(column, 'o', '-', 'o');
			else if (i == line)
				print_column(column, 'o', '-', 'o');
			else
				print_column(column, '|', ' ', '|');
			i++;
		}
	}
}
