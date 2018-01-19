/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:10:57 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 16:23:09 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_string_table(char **tab, int size, int (*fct)(char *, char *))
{
	int		i;
	char	*strcpy;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1 && tab[i + 1])
		{
			if (fct(tab[i], tab[i + 1]) > 0)
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

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		len;

	len = -1;
	while (tab[++len])
		len++;
	ft_sort_string_table(tab, len, cmp);
}
