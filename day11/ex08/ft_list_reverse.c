/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 10:20:29 by manki             #+#    #+#             */
/*   Updated: 2017/07/27 11:50:53 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*tmp1;
	int			i;
	t_list		*tmp2;

	if (begin_list[0])
	{
		i = 0;
		tmp1 = begin_list[0];
		tmp2 = begin_list[0];
		tmp2->next = &tmp1[1];
		begin_list[0] = tmp2;
	}
}
