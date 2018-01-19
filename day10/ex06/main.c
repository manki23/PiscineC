/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 10:29:19 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 20:54:44 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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

int		ft_verif_operant(char *c, t_operant *tab)
{
	int		i;
	int		verif;

	i = -1;
	verif = 0;
	while (++i < 5)
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

void	ft_print(int ac, char **av, t_operant *op_tab)
{
	int		verif;
	int		i;
	t_fun	fct;

	i = 0;
	verif = 0;
	if (ac == 4 && av[2][1] == '\0' && ft_verif_operant(av[2], op_tab))
	{
		while (i < 5)
		{
			if (!ft_strcmp(av[2], (op_tab + i)->c) && !ft_op_by_zero(av))
			{
				fct = ((op_tab + i)->ff);
				ft_putnbr(fct(ft_atoi(av[1]), ft_atoi(av[3])));
				verif = 1;
			}
			i++;
		}
		ft_putchar('\n');
	}
	else if (ac == 4)
		ft_putstr("0\n");
}

int		main(int ac, char **av)
{
	t_operant		op_tab[5];

	op_tab[0].c = "+";
	op_tab[1].c = "-";
	op_tab[2].c = "/";
	op_tab[3].c = "%";
	op_tab[4].c = "*";
	op_tab[0].ff = &ft_add;
	op_tab[1].ff = &ft_soustract;
	op_tab[2].ff = &ft_divide;
	op_tab[3].ff = &ft_modulo;
	op_tab[4].ff = &ft_mult;
	ft_print(ac, av, op_tab);
	return (0);
}
