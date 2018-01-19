/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:12:13 by manki             #+#    #+#             */
/*   Updated: 2017/07/20 12:38:43 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

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

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		j;

	i = 0;
	while ((par + i)->str != 0)
	{
		ft_putstr((par + i)->str);
		ft_putchar('\n');
		ft_putnbr((par + i)->size_param);
		ft_putchar('\n');
		j = 0;
		while ((par + i)->tab[j] != 0)
		{
			ft_putstr((par + i)->tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
