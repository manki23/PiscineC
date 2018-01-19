/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 08:31:34 by manki             #+#    #+#             */
/*   Updated: 2017/07/20 10:35:10 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min < max)
	{
		if (!(tab = (int *)malloc(sizeof(*tab) * ((max - min) + 1))))
			return (0);
		while ((min + i) < max)
		{
			tab[i] = min + i;
			i++;
		}
		tab[i] = '\0';
		i = 0;
		*range = tab;
		return (max - min);
	}
	else
	{
		range = NULL;
		return (0);
	}
}
