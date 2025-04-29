/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:36 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/28 08:31:14 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/* 
int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_iterative_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_iterative_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_iterative_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_iterative_factorial(5));
} */
