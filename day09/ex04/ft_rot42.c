/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 20:55:01 by manki             #+#    #+#             */
/*   Updated: 2017/07/14 08:18:18 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'J') ||
		(str[i] >= 'a' && str[i] <= 'j'))
			str[i] = str[i] + (42 % 26);
		else if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] = 'A' + (str[i] - 'I');
		else if (str[i] >= 'k' && str[i] <= 'z')
			str[i] = 'a' + (str[i] - 'i');
		i++;
	}
	return (str);
}