/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 12:35:55 by manki             #+#    #+#             */
/*   Updated: 2017/07/22 11:59:37 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	if (!(str = (char *)malloc(sizeof(*str) * (i + 1))))
		return (0);
	i = -1;
	while (src[++i] != '\0')
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stru;
	int				i;

	i = -1;
	if (!(stru = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (++i < ac)
	{
		if (!((stru + i)->copy = (char *)malloc(sizeof(char) *
			(ft_strlen(av[i]) + 1))))
			return (0);
		(stru + i)->size_param = ft_strlen(av[i]);
		(stru + i)->str = av[i];
		(stru + i)->copy = ft_strdup(av[i]);
		(stru + i)->tab = ft_split_whitespaces(av[i]);
	}
	(stru + i)->str = 0;
	return (stru);
}
