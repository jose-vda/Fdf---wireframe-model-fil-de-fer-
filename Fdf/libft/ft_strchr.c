/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:19:02 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:19:02 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}

/*int main()
{
	char str[] = "";
	char c = 'a';

	char *resultado = strchr(0, 0);

	if (resultado)
		printf("Caractere encontrado na posicao: %ld\n", (resultado - str + 1));
	else
		printf("Caractere não encontrado.\n");

	return (0);
}*/
