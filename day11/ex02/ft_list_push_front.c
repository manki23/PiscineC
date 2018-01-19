/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:44:45 by manki             #+#    #+#             */
/*   Updated: 2017/07/26 15:51:29 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*tmp;
	t_list		*list_copy;

	tmp = ft_create_elem(data);
	list_copy = begin_list[0];
	tmp->next = list_copy;
	begin_list[0] = tmp;
}
