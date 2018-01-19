/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:59:52 by manki             #+#    #+#             */
/*   Updated: 2017/07/26 16:13:57 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	if (begin_list)
	{
		while (begin_list->next)
		{
			begin_list = begin_list->next;
			i++;
		}
		i++;
	}
	return (i);
}
