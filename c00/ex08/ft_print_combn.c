/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 09:12:14 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/14 11:37:32 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int start, int current, int output[])
{
	int	i;
	int	j;

	if (current == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(output[i] + '0');
			i++;
		}
		if (output[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	j = start;
	while (j <= (10 - (n - current)))
	{
		output[current] = j;
		ft_print_combn_recursive(n, j + 1, current + 1, output);
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	output[10];

	if (n > 0 && n < 10)
		ft_print_combn_recursive(n, 0, 0, output);
	else
		return ;
}
