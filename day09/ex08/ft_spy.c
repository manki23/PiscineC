/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:07:07 by manki             #+#    #+#             */
/*   Updated: 2017/07/14 14:07:52 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_str_lowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_str_lowcase(argv[i]);
		if (ft_strcmp(argv[i], "president") == 0)
			write(1, "Alert!!!\n", 9);
		else if (ft_strcmp(argv[i], "attack") == 0)
			write(1, "Alert!!!\n", 9);
		else if (ft_strcmp(argv[i], "powers") == 0)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
