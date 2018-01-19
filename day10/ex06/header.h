/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 09:29:05 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 14:06:10 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef int				(*t_fun)(int, int);

typedef struct	s_operant
{
	char		*c;
	t_fun		ff;
}				t_operant;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_print_digits(int nb);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);

int				ft_add(int a, int b);
int				ft_soustract(int a, int b);
int				ft_divide(int a, int b);
int				ft_modulo(int a, int b);
int				ft_mult(int a, int b);

#endif
