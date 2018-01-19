/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:33:48 by manki             #+#    #+#             */
/*   Updated: 2017/07/10 19:59:12 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	else if (nb == 2147483647)
		return (1);
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	unsigned int	i;
	unsigned		nb_copy;
	int				prime;

	i = nb + 1;
	nb_copy = nb;
	if (nb == 2147483647)
		return (nb);
	while ((i < 2 * nb_copy) && (i < 2147483648))
	{
		prime = ft_is_prime(i);
		if (prime)
			return (i);
		else
			i++;
	}
	return (-1);
}
