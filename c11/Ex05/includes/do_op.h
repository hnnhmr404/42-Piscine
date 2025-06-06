/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:10:09 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/05/22 17:59:10 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

#include <stdio.h>
#include <unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mod(int a, int b);
int		ft_div(int a, int b);
int		ft_mul(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int     ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
