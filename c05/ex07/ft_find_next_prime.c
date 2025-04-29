/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:15:22 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/28 08:34:30 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/* 
int	main(void)
{
	printf("What is the next prime of -3? %d\n", ft_find_next_prime(-3));
	printf("What is the next prime of 6? %d\n", ft_find_next_prime(6));
	printf("What is the next prime of 13? %d\n", ft_find_next_prime(13));
	printf("What is the next prime of 25? %d\n", ft_find_next_prime(25));
	printf("What is the next prime of 84? %d\n", ft_find_next_prime(84));
} */
