/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:15:33 by manki             #+#    #+#             */
/*   Updated: 2017/07/18 15:27:10 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		j;
	int		k;

	j = 0;
	while (tab[j] != 0)
	{
		k = 0;
		while (tab[j][k] != '\0')
		{
			ft_putchar(tab[j][k]);
			k++;
		}
		ft_putchar('\n');
		j++;
	}
}
