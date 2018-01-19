/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:50:46 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 20:58:05 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header9.h"
#include "ft_opp.h"

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

int		ft_verif_operant(char *c, t_opp *tab)
{
	int		i;
	int		verif;

	i = -1;
	verif = 0;
	while (tab[++i].c)
		if (!ft_strcmp(c, tab[i].c))
			verif = 1;
	return (verif);
}

int		ft_op_by_zero(char **av)
{
	if (ft_atoi(av[3]) == 0)
	{
		if (!ft_strcmp(av[2], "/"))
		{
			ft_putstr("Stop : division by zero");
			return (1);
		}
		if (!ft_strcmp(av[2], "%"))
		{
			ft_putstr("Stop : modulo by zero");
			return (1);
		}
	}
	return (0);
}

void	ft_autorized_opp(t_opp *tab)
{
	int		i;

	i = -1;
	while (tab[++i].c)
	{
		ft_putchar(' ');
		ft_putstr(tab[i].c);
	}
}

int		main(int ac, char **av)
{
	int		verif;
	int		i;
	t_fun	fct;

	i = -1;
	verif = 0;
	if (ac == 4 && ft_verif_operant(av[2], g_opptab))
	{
		while (++i < 5)
		{
			if (!ft_strcmp(av[2], (g_opptab + i)->c) && !ft_op_by_zero(av))
			{
				fct = ((g_opptab + i)->ff);
				ft_putnbr(fct(ft_atoi(av[1]), ft_atoi(av[3])));
				verif = 1;
			}
		}
		ft_putchar('\n');
	}
	else if (ac == 4)
	{
		ft_putstr("error : only [");
		ft_autorized_opp(g_opptab);
		ft_putstr("] are accepted.\n");
	}
}
