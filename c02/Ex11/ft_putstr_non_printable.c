/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:34:02 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/15 12:49:39 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_xdigit(unsigned char c)
{
	char	*xdigit;

	// Hexadecimal base
	xdigit = "0123456789abcdef";
	// the division and the module find the character corresponding
	// to the past in the hexadecimal base and print it
	ft_putchar(xdigit[c / 16]);
	ft_putchar(xdigit[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// If this is less than 32 or equal to 127
		// that means non-printable 
		if (str[i] < ' ' || str[i] == 127)
		{
			// Two backslashes to be able to print 1
			ft_putchar('\\');
			// Call the function xdigit to transform the current character into hexadecimal
			ft_xdigit(str[i]);
		}
		else
			// If it's different from non-propriable, the character is printed
			ft_putchar(str[i]);
		i++;
	}
}
/*  
int	main(void)
{
	char *str = "Hello\nWorld!";
	ft_putstr_non_printable(str);
} */
