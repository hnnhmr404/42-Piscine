/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:57:53 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/17 18:10:38 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	nl;
	char	result;

	str1 = "aB3/!'.;Ko+";
	str2 = "aB3/!'.;Ko\n";
	nl = '\n';
	result = ft_str_is_printable(str1) + '0';
	write(1, &result, 1);
	write(1, &nl, 1);
	result = ft_str_is_printable(str2) + '0';
	write(1, &result, 1);
	write(1, &nl, 1);
	return (0);
}*/
