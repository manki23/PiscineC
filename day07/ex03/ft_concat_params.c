/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:29:43 by manki             #+#    #+#             */
/*   Updated: 2017/07/20 10:42:17 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = -1;
	while (++j < argc - 1)
		i += ft_strlen(argv[j + 1]);
	if (!(str = (char*)malloc(sizeof(*str) * (i + j + 1))))
		return (0);
	j = -1;
	k = 0;
	while (++j < argc - 1)
	{
		i = -1;
		while (++i < ft_strlen(argv[j + 1]))
			str[k++] = argv[j + 1][i];
		str[k] = '\n';
		k++;
	}
	str[k - 1] = '\0';
	return (str);
}
