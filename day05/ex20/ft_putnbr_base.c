/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:25:08 by manki             #+#    #+#             */
/*   Updated: 2017/07/20 10:00:37 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_digits(int nb, char *base, int i)
{
	if (nb <= -i || nb >= i)
	{
		ft_print_digits(nb / i, base, i);
		ft_print_digits(nb % i, base, i);
	}
	else if (nb >= 0)
		ft_putchar(base[nb]);
	else
		ft_putchar(base[-nb]);
}

int		ft_search_same_char(char *tab, int size)
{
	int		i;

	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[size] == tab[i])
				return (0);
			i++;
		}
		size--;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return ;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] == 127)
			return ;
		i++;
	}
	i = 0;
	while (base[i] != '\0')
		i++;
	if (ft_search_same_char(base, i))
	{
		if (nbr < 0)
			ft_putchar('-');
		ft_print_digits(nbr, base, i);
	}
}
