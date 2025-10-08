/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:13:57 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/16 16:58:26 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!s || !f)
		return (NULL);
	result = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*char	f(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main(void)
{
	char	s[] = "Eu amo estudar";

	printf("%s", ft_strmapi(s, f));
	return (0);
}*/
