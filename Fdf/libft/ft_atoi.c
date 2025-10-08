/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:26:40 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:26:40 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sinal;
	size_t	resultado;

	i = 0;
	sinal = 1;
	resultado = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (resultado * 10) + (str[i] - 48);
		i++;
	}
	return (resultado * sinal);
}

/*int main()
{
	char str[] = "     -1234abc456";

	printf("%d", ft_atoi(str));

	return (0);
}*/
