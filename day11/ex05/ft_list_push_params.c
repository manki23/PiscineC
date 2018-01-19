/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 16:39:45 by manki             #+#    #+#             */
/*   Updated: 2017/07/26 17:03:54 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*list;
	t_list		*copy;
	t_list		*tmp;

	i = 0;
	list = 0;
	ac--;
	av++;
	if (ac >= 1)
	{
		list = ft_create_elem(av[i]);
		while (++i < ac)
		{
			copy = list;
			tmp = ft_create_elem(av[i]);
			tmp->next = copy;
			list = tmp;
		}
	}
	return (list);
}
