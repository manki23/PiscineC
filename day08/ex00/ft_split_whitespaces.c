/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 18:22:27 by manki             #+#    #+#             */
/*   Updated: 2017/07/21 08:51:37 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nbr_cut(char *str)
{
	int		cut;
	int		i;

	i = 0;
	cut = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') &&
	str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		&& str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\n'
		&& str[i + 1] != '\0')
			cut++;
		i++;
	}
	cut++;
	return (cut);
}

int		ft_nbr_char(char *str)
{
	int		i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	if (!(tab = (char **)malloc(sizeof(char *) * (ft_nbr_cut(str) + 1))))
		return (0);
	i = 0;
	j = -1;
	while (++j < ft_nbr_cut(str))
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') &&
				str[i] != '\0')
			i++;
		k = 0;
		if (!(tab[j] = (char *)malloc(sizeof(char) * (ft_nbr_char(&str[i]) +
		1))))
			return (0);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' &&
		str[i] != '\0')
			tab[j][k++] = str[i++];
		tab[j][k] = '\0';
	}
	tab[j] = 0;
	return (tab);
}
