/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:51:26 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/23 14:54:17 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	numbers;
	int	i;
	int	sign;

	i = 0;
	numbers = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numbers = (numbers * 10) + (str[i] - '0');
		i++;
	}
	return (sign * numbers);
}
/* 
int	main(void)
{
	char *n = " ---+--+1234ab567";

	printf("My: %d\n", ft_atoi(n));
}*/
