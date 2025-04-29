/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:49:34 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/17 15:50:25 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "WORDSANDLETTERS";
	char	*str2 = "WORDSANDlETTERS";

	printf("%s is uppercase? %d\n", str1, ft_str_is_uppercase(str1));	
	printf("%s is uppercase? %d\n", str2, ft_str_is_uppercase(str2));
} */
