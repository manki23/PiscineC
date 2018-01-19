/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:20:41 by manki             #+#    #+#             */
/*   Updated: 2017/07/10 15:53:10 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	unsigned int	nb_bis;

	nb_bis = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	nb_bis = 1;
	while (nb > 1)
	{
		nb_bis = nb_bis * nb;
		if (nb_bis >= 2147483647)
			return (0);
		nb--;
	}
	return (nb_bis);
}
