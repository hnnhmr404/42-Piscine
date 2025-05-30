/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:04:00 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/23 15:23:31 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/* 
int	ft_cmp(void *data1, void *data2)
{
	return (*(int *)data1 - *(int *)data2);
} */

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	void	*temp;


	// check if the arguments are valid
	if (!begin_list || !cmp)
		return ;

	// Check if the list is empty
	if (!(*begin_list))
		return ;
	current = *begin_list;
	while (current->next)
	{	
		// Checks if the current element is greater than the next
		if ((*cmp)(current->data, current->next->data) > 0)
		{
			// Make the swap of values
			temp = current->data;
			current->data = current->next->data;
			current->next->data = temp;

			// The order restarts from the beginning of the list
			current = *begin_list;
		}
		else
			current = current->next;
	}
}
/*
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

// Prints the values contained in each element of the chained list
void	print_list(t_list *list)
{
	t_list *current = list;

	while (current)
	{
		printf("Value: %d\n", *(int *)current->data);
		current = current->next;
	}
}

int main(void)
{
	// declaration of the lists
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));

	// declaration of values
	int a = 15;
	int b = -3;
	int c = 0;
	int d = -178;
	int e = 986;
	int f = 9;

	// declaration and assign of pointers
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	void *p4 = &d;
	void *p5 = &e;
	void *p6 = &f;

	// Creation of List Elements
	linked_list = ft_create_elem(p1);
	linked_list->next = ft_create_elem(p2);
	linked_list->next->next = ft_create_elem(p3);
	linked_list->next->next->next = ft_create_elem(p4);
	linked_list->next->next->next->next = ft_create_elem(p5);
	linked_list->next->next->next->next->next = ft_create_elem(p6);

	printf("List 1 before:\n");
	print_list(linked_list);

	// Sort the list in crescent order
	ft_list_sort(&linked_list, &ft_cmp);

	printf("\nList 1 after:\n");
	print_list(linked_list);

	// free of memory allocated
	free(linked_list);
} */
