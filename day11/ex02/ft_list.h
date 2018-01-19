/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:39:06 by manki             #+#    #+#             */
/*   Updated: 2017/07/26 15:43:47 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list	t_list;

struct					s_list
{
	void				*data;
	t_list				*next;
};

t_list					*ft_create_elem(void *data);
void					ft_list_push_front(t_list **begin_list, void *data);

#endif
