/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 14:08:25 by manki             #+#    #+#             */
/*   Updated: 2017/07/26 09:13:52 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_crois(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		crois;

	i = -1;
	crois = 0;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			crois = 1;
		else
			return (0);
	}
	return (crois);
}

int		ft_is_decr(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		decr;

	i = -1;
	decr = 0;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			decr = 1;
		else
			return (0);
	}
	return (decr);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (length <= 2)
		return (1);
	else
		return (ft_is_crois(tab, length, f) | ft_is_decr(tab, length, f));
}
