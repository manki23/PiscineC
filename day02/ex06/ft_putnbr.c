/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 07:58:50 by manki             #+#    #+#             */
/*   Updated: 2017/07/10 13:21:57 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_power(int power)
{
	int		result;

	result = 1;
	while (power > 0)
	{
		result = result * 10;
		power--;
	}
	return (result);
}

void	ft_print(unsigned int i_bis, int nb_of_digits)
{
	int		digits;

	while (i_bis > 0)
	{
		nb_of_digits--;
		digits = '0' + (i_bis / (ft_power(nb_of_digits)));
		ft_putchar(digits);
		if (i_bis > 0)
		{
			if ((i_bis % (ft_power(nb_of_digits))) != 0)
				i_bis = i_bis % (ft_power(nb_of_digits));
			else
			{
				i_bis /= 10;
				while (i_bis > 0)
				{
					ft_putchar('0');
					i_bis /= 10;
				}
			}
		}
	}
}

void	ft_unsigned_digits(int i, int nb_of_digits)
{
	unsigned int i_bis;

	if (i < 0)
	{
		i_bis = i * (-1);
		ft_putchar('-');
	}
	else
		i_bis = i;
	ft_print(i_bis, nb_of_digits);
}

void	ft_putnbr(int nb)
{
	int		nb_of_digits;
	int		i;

	i = nb;
	nb_of_digits = 0;
	while (i != 0)
	{
		i /= 10;
		nb_of_digits++;
	}
	if (nb == 0)
		ft_putchar('0');
	else
		ft_unsigned_digits(nb, nb_of_digits);
}
