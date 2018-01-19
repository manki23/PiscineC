/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:02:28 by manki             #+#    #+#             */
/*   Updated: 2017/07/08 19:40:39 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line1(int x)
{
	int counter_x;

	counter_x = 1;
	while (counter_x <= x)
	{
		if (counter_x == 1)
			ft_putchar('A');
		else if (counter_x == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		counter_x++;
	}
}

void	ft_lineb(int x)
{
	int counter_x;

	counter_x = 1;
	while (counter_x <= x)
	{
		if (counter_x == 1)
			ft_putchar('B');
		else if (counter_x == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter_x++;
	}
}

void	ft_line_y(int x)
{
	int counter_x;

	counter_x = 1;
	while (counter_x <= x)
	{
		if (counter_x == 1)
			ft_putchar('C');
		else if (counter_x == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		counter_x++;
	}
}

void	rush(int x, int y)
{
	int counter_y;

	counter_y = 1;
	while (counter_y <= y)
	{
		if (counter_y == 1)
			ft_line1(x);
		else if (counter_y == y)
			ft_line_y(x);
		else
			ft_lineb(x);
		counter_y++;
		ft_putchar('\n');
	}
}
