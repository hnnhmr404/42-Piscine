/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:43:48 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/23 15:10:29 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include <stdio.h>
#include <stdlib.h>

int        ft_intcmp(int a, int b)
{
    return (a - b);
} */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

    i = 0;

    // While 'i' don't reach the last number of 'tab'
    while (i < length - 1)
    {
        // If the return of values is positive means that it is not in order
        if ((*f)(tab[i], tab[i + 1]) > 0)
            return (0);
        i++;
    }
	return (1);
}
/* 
int        main(void)
{
    int	tab1[3] = {1, 3, 2};
    int	tab2[3] = {1, 2, 3};
    int            length = 3;

    printf("Is 'tab1' in order? %d\n", ft_is_sort(tab1, length, &ft_intcmp));
    printf("Is 'tab2' in order? %d\n", ft_is_sort(tab2, length, &ft_intcmp));
} */
