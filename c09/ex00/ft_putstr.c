/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:47:30 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/17 10:58:02 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int		main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("0123456789:\n");
	ft_putstr(str);
	printf("\n\ntest:\n");
	ft_putstr(str1);
}*/
