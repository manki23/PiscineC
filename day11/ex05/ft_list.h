/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 16:40:37 by manki             #+#    #+#             */
/*   Updated: 2017/07/26 16:41:51 by manki            ###   ########.fr       */
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
t_list					*ft_list_push_params(int ac, char **av);

#endif
