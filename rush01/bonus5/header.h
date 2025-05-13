/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:55:05 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 17:14:51 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	print_error(void);
void	print_solution(char **puzzle_board);
void	set_clues(char **puzzle_board, char **clues);
char	**memory_allocation(int rows, int columns);
char	**create_board(void);
char	**convert_in_array(char *str);
int		is_correct_params(char **argv);
int		is_correct_left_view(char **puzzle_board, int row);
int		is_correct_right_view(char **puzzle_board, int row);
int		is_correct_top_view(char **puzzle_board, int column);
int		is_correct_bottom_view(char **puzzle_board, int column);
int		is_correct_view(char **board, int fixed, int is_row, int is_reverse);
char	get_board_value(char **board, int fixed, int i, int is_row);
int		get_clue(char **board, int fixed, int is_row, int is_reverse);
char	calc_visible(char **board, int fixed, int is_row, int is_reverse);
void	init_loop_vars(int *i, int *end, int *step, int is_reverse);
int		is_in_column(char **puzzle_board, int row, int column, int digit);
int		is_in_row(char **puzzle_board, int row, int column, int digit);
int		is_correct_row(char **board, int row);
int		is_correct_col(char **board, int col);
void	rush(char **clues);
int		mark_success(char **puzzle_board);
void	solve_recursive(char **board, int row, int col);
#endif
