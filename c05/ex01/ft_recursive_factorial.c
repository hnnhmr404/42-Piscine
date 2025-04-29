/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:25 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/28 08:31:34 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/* 
int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_recursive_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_recursive_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_recursive_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_recursive_factorial(5));
} */
