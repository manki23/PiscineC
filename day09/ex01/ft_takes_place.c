/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:46:47 by manki             #+#    #+#             */
/*   Updated: 2017/07/13 19:45:01 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour < 24)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		if (hour == 0)
			printf("12.00 P.M. AND %d.00 A.M.\n", (hour + 1));
		else if (hour < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, (hour + 1));
		else if (hour == 11)
			printf("%d.00 A.M. AND %d.00 P.M.\n", hour, (hour + 1));
		else if (hour == 12)
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour, (hour - 11));
		else if (hour == 23)
			printf("%d.00 P.M. AND 12.00 A.M.\n", (hour - 12));
		else if (hour > 12)
			printf("%d.00 P.M. AND %d.00 P.M.\n", (hour - 12), (hour - 11));
	}
}
