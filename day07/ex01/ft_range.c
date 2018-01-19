/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:53:18 by manki             #+#    #+#             */
/*   Updated: 2017/07/20 10:32:29 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
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
		return (tab);
	}
	else
		return ((void *)0);
}
