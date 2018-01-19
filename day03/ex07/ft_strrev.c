/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:27:24 by manki             #+#    #+#             */
/*   Updated: 2017/07/11 09:06:52 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		nb_char;
	int		increment;
	char	c;

	increment = 0;
	nb_char = 0;
	while (*(str + nb_char) != '\0')
		nb_char++;
	nb_char--;
	while (increment < nb_char)
	{
		c = *(str + increment);
		*(str + increment) = *(str + nb_char);
		*(str + nb_char) = c;
		increment++;
		nb_char--;
	}
	return (str);
}
