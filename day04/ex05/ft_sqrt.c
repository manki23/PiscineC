/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:14:12 by manki             #+#    #+#             */
/*   Updated: 2017/07/10 17:04:57 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while ((i * i <= nb) && (i * i <= 2147395600))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
