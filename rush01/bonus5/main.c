/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:57:51 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/19 10:58:45 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char	**clues;

	if (argc != 2 || !is_correct_params(argv))
		print_error();
	else
	{
		clues = convert_in_array(argv[1]);
		rush(clues);
	}
	return (0);
}
