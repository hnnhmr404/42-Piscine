/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:25:28 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/01 17:59:27 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
// #include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		length;

	length = 0;
	while (src[length])
		length++;
	dest = (char *) malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char	*src = "string";

	printf("My: %s\n", ft_strdup(src));
	printf("Or: %s\n", strdup(src));
} */
