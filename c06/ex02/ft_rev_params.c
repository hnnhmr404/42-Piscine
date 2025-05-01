/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:37:05 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/01 17:58:08 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	l;

	i = 1;
	l = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[l][j])
		{
			ft_putchar(argv[l][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		l--;
	}
}
