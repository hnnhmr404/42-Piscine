/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:29:28 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/22 17:52:59 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

// Creates a t_list element that is a struct
t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

    // do memory allocation and check
	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);

    // assigns values to the struct variables
	elem->data = data;
	elem->next = NULL;

    // Returns the created element
	return (elem);
}
/* 
int main(void)
{
	int		a = 42;

	// creation of the list;
	t_list	*list;

	// creation of a element is the list
	list = ft_create_elem(&a);

	// Prints the elements of the list
	printf("Value of elem->data: %d\n", *(int *)list->data);
	printf("Value of elem->next: %p\n", (void *)list->next);

	// free of memory allocated
	free(list);
} */
