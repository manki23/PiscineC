/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:44:00 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 16:44:08 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_table(char **tab, int size)
{
	int		i;
	char	*strcpy;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1 && tab[i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				strcpy = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = strcpy;
			}
			i++;
		}
		size--;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int		len;

	len = -1;
	while (tab[++len])
		len++;
	ft_sort_string_table(tab, len);
}
