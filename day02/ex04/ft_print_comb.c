/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:40:07 by manki             #+#    #+#             */
/*   Updated: 2017/07/10 13:12:05 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b, int c)
{
	int ascii1;
	int ascii2;
	int ascii3;

	ascii1 = '0' + a;
	ascii2 = '0' + b;
	ascii3 = '0' + c;
	ft_putchar(ascii1);
	ft_putchar(ascii2);
	ft_putchar(ascii3);
	if (ascii1 < '0' + 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				if ((a < b) && (b < c))
					ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
