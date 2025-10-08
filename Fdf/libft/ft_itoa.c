/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:33:10 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/16 16:45:27 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include "libft.h"

int	ft_size(long n)
{
	int			i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	l;
	size_t		len;
	char		*str;

	l = n;
	len = ft_size(l);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (l < 0)
	{
		l = l * (-1);
		str[0] = '-';
	}
	if (l == 0)
		str[0] = '0';
	str[len] = '\0';
	while (l > 0)
	{
		str[len - 1] = (l % 10) + '0';
		len--;
		l = l / 10;
	}
	return (str);
}

/*int	main(void)
{
	int n = -2648;
	char	*str;

	str = ft_itoa(n);

	printf("%s\n", str);

	return (0);
}*/
