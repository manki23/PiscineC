/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 09:58:05 by manki             #+#    #+#             */
/*   Updated: 2017/07/16 17:27:48 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

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
		i = 1;
		while (i < size - 1)
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

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	ft_sort_string_table(argv, argc);
	while (i < argc)
	{
		j = 0;
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
