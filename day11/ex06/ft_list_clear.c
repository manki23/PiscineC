/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:15:12 by manki             #+#    #+#             */
/*   Updated: 2017/07/26 17:41:35 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (begin_list[0])
	{
		while (begin_list[0]->next)
		{
			tmp1 = begin_list[0]->next;
			tmp2 = tmp1;
			free(tmp2);
			begin_list[0] = tmp1;
		}
		tmp1 = begin_list[0]->next;
		tmp2 = tmp1;
		free(tmp2);
		begin_list[0] = tmp1;
	}
}
