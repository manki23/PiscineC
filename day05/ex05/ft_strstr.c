/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:24:28 by manki             #+#    #+#             */
/*   Updated: 2017/07/16 13:07:23 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_true_or_fake(char *str, char *to_find, int i)
{
	int		j;

	j = 0;
	while (str[i] == to_find[j])
	{
		i++;
		j++;
		if (to_find[j] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != to_find[0])
	{
		if (str[i] == '\0')
			return ("(null)");
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_true_or_fake(str, to_find, i))
			return (&str[i]);
		i++;
	}
	return ("(null)");
}
