/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:33:32 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/28 08:33:43 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("-7 is prime? %d\n", ft_is_prime(-7));
	printf("0 is prime? %d\n", ft_is_prime(0));
	printf("2 is prime? %d\n", ft_is_prime(2));
	printf("3 is prime? %d\n", ft_is_prime(3));
	printf("5 is prime? %d\n", ft_is_prime(5));
	printf("6 is prime? %d\n", ft_is_prime(6));
	printf("23 is prime? %d\n", ft_is_prime(23));
} */
