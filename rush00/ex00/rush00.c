/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfremond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 04:22:19 by cfremond          #+#    #+#             */
/*   Updated: 2017/07/09 05:04:20 by cfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line1_and_y(int x)
{
	int	counter_column_x;

	counter_column_x = 1;
	while (counter_column_x <= x)
	{
		if (counter_column_x == 1 || counter_column_x == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		counter_column_x++;
	}
}

void	ft_line_central(int x)
{
	int	counter_column_x;

	counter_column_x = 1;
	while (counter_column_x <= x)
	{
		if (counter_column_x == 1 || counter_column_x == x)
			ft_putchar('|');
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
		if (counter_line_rush_y == 1 || counter_line_rush_y == y)
			ft_line1_and_y(x);
		else
			ft_line_central(x);
		counter_line_rush_y++;
		ft_putchar('\n');
	}
}
