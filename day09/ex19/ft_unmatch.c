/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:33:29 by manki             #+#    #+#             */
/*   Updated: 2017/07/14 16:50:21 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		swap;

	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

int		ft_unmatch(int *tab, int length)
{
	int		i;
	int		j;

	i = 0;
	j = length;
	ft_sort_integer_table(tab, length);
	while (tab[i] != '\0')
	{
		if (tab[i] == tab[i + 1])
			i += 2;
		else if (tab[i + 1] == tab[i + 2])
			return (tab[i]);
		else
			return (tab[i + 1]);
	}
	return (0);
}
