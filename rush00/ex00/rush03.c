/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:44:03 by mmajani           #+#    #+#             */
/*   Updated: 2017/07/08 18:56:48 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line1_and_y(int x)
{
	int counter_column_x;

	counter_column_x = 1;
	while (counter_column_x <= x)
	{
		if (counter_column_x == 1)
			ft_putchar('A');
		else if (counter_column_x == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		counter_column_x++;
	}
}

void	ft_lineb(int x)
{
	int counter_column_x;

	counter_column_x = 1;
	while (counter_column_x <= x)
	{
		if (counter_column_x == 1)
			ft_putchar('B');
		else if (counter_column_x == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter_column_x++;
	}
}

void	rush(int x, int y)
{
	int counter_line_rush_y;

	counter_line_rush_y = 1;
	while (counter_line_rush_y <= y)
	{
		if (counter_line_rush_y == 1)
			ft_line1_and_y(x);
		else if (counter_line_rush_y == y)
			ft_line1_and_y(x);
		else
			ft_lineb(x);
		counter_line_rush_y++;
		ft_putchar('\n');
	}
}
