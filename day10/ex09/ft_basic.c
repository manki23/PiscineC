/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:14:53 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 17:22:02 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header9.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_print_digits(int nb)
{
	if (nb <= -10 || nb >= 10)
	{
		ft_print_digits(nb / 10);
		ft_print_digits(nb % 10);
	}
	else if (nb >= 0)
		ft_putchar('0' + nb);
	else
		ft_putchar('0' - nb);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		ft_print_digits(nb);
	else
	{
		ft_putchar('-');
		ft_print_digits(nb);
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		result *= 10;
		if (str[i] >= '0' && str[i] <= '9')
			result = result + str[i] - 48;
		else
			return (result * sign * 0.1);
		i++;
	}
	return (result * sign);
}
