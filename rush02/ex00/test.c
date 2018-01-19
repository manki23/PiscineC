/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 20:19:34 by manki             #+#    #+#             */
/*   Updated: 2017/07/23 20:29:31 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define SIZE_BUFFER 8192

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;
	int lenght_dest;

	j = 0;
	lenght_dest = ft_strlen(dest);
	i = lenght_dest;
	while (i < lenght_dest + nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
void	ft_read(void)
{
	char	buffer[SIZE_BUFFER + 1];
	char	*str;
	int		ret;
	char	*ptr;
	char	*ptr2;

	while (ret = read(0, buffer, 10) != 0)
	{
		total = total + ret;
		ft_strncat(ptr, buffer, total);
		ptr2 = ptr;
		if (!(str = malloc(sizeof(char) * (size + 1))))
			return ;
	}
}

int main()
{
	ft_read();
	return 0;
}
