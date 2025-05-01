/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:32:31 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/01 16:40:24 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	char	*str1 = "T stndo";
	char	*str2 = "Testndo";

	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));	
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));	
} */
