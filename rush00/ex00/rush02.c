/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfremond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 05:07:11 by cfremond          #+#    #+#             */
/*   Updated: 2017/07/09 05:56:10 by cfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line1(int x)
{
	int counter_column_x;

	counter_column_x = 1;
	while (counter_column_x <= x)
	{
		if (counter_column_x == 1 || counter_column_x == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		counter_column_x++;
	}
}

void	middle_line(int x)
{
	int counter_column_x;

	counter_column_x = 1;
	while (counter_column_x <= x)
	{
		if (counter_column_x == 1 || counter_column_x == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter_column_x++;
	}
}

void	last_line(int x)
{
	int counter_column_x;

	counter_column_x = 1;
	while (counter_column_x <= x)
	{
		if (counter_column_x == 1 || counter_column_x == x)
			ft_putchar('C');
		else
			ft_putchar('B');
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
			ft_line1(x);
		else if (counter_line_rush_y == y)
			last_line(x);
		else
			middle_line(x);
		counter_line_rush_y++;
		ft_putchar('\n');
	}
}
