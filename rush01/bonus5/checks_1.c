/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_view2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaw <zlaw@student.42ip.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:53:09 by zlaw              #+#    #+#             */
/*   Updated: 2025/04/20 02:54:01 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_correct_left_view(char **board, int row)
{
	if (!is_correct_view(board, row, 1, 0))
		return (0);
	return (1);
}

int	is_correct_right_view(char **board, int row)
{
	return (is_correct_view(board, row, 1, 1));
}

int	is_correct_top_view(char **board, int col)
{
	if (!is_correct_view(board, col, 0, 0))
		return (0);
	return (1);
}

int	is_correct_bottom_view(char **board, int col)
{
	return (is_correct_view(board, col, 0, 1));
}
