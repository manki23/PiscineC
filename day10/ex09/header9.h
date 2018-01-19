/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header9.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:17:13 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 18:59:12 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER9_H
# define HEADER9_H

# include <unistd.h>

typedef int				(*t_fun)(int, int);

typedef struct	s_opp
{
	char		*c;
	t_fun		ff;
}				t_opp;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_print_digits(int nb);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);

int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_mul(int a, int b);
int				ft_usage(int a, int b);

#endif
