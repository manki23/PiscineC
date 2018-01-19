/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:06:44 by manki             #+#    #+#             */
/*   Updated: 2017/07/11 10:21:53 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
