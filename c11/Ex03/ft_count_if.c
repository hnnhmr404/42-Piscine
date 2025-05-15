/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:43:26 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/15 14:43:29 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include <stdio.h>
#include <stdlib.h>

int ft_comparison(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'A')
            return (1);
        i++;
    }
	return (0);
} */

// This function receives the pointer of ft_comparison function as a parameter
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
    int count;

	i = 0;
    count = 0;
	while (i < length)
	{
        // Send the current string to be checked by ft_comparison
        // If character 'A' is found in the string, 'count' is increased
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/* 
int main (void)
{
	char **strs;
    int lenght = 3;
	int	i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = "testarray";
	strs[1] = "teAstarrAy";
	strs[2] = "12300212A";
	printf("How many strings the character 'A' was found?: %d\n", ft_count_if(strs, 3, &ft_comparison));
    free(strs);
} */
