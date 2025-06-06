/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:42:06 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/23 15:09:37 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h>

int ft_square(int n)
{
	return (n * n);
} */

// This function receives the pointer of ft_square function as a parameter
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*squared_tab;

	squared_tab = (int *)malloc(sizeof(int) * length);
	if (squared_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
        // 'Squared_tab'receives the value of each position
        // of 'tab' multiplied by the past function as a pointer
		// The '*' is the argument for dereference.
		// 'Square_tab' receives the value that comes from the function
		squared_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (squared_tab);
}
/* 
int main (void)
{
	int	i;
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = 10;
	int *squared_tab;

	squared_tab = ft_map(tab, length, &ft_square);
	i = 0;
	while ( i < length)
	{
		printf( "%d\n", squared_tab[i]);
		i++;
	}
} */
