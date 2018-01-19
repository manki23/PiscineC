/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:18:39 by manki             #+#    #+#             */
/*   Updated: 2017/07/10 13:18:24 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	ft_print(int a, int b)
{
	int a1;
	int a2;
	int b1;
	int b2;

	a1 = '0' + (a / 10);
	a2 = '0' + (a % 10);
	b1 = '0' + (b / 10);
	b2 = '0' + (b % 10);
	if ((a != b) && (a < b))
	{
		ft_putchar(a1);
		ft_putchar(a2);
		ft_putchar(' ');
		ft_putchar(b1);
		ft_putchar(b2);
		if (((a == 98) && (b == 99)) == 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = 0;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}
