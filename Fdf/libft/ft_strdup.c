/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:17:06 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:17:06 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*dest;
	size_t		i;
	size_t		size;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char    src[] = "Eu amo estuadar!";

	printf("%s", ft_strdup(src));

	return (0);
}*/
