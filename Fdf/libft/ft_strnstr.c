/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:09:45 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/12 16:48:05 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *need, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_need;

	i = 0;
	j = 0;
	size_need = 0;
	if (need[0] == '\0')
		return ((char *)str);
	while (need[size_need])
		size_need++;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == need[j] && (i + j) < len && need[j])
			j++;
		if (j == size_need)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "abc";
	char need[] = "abc";

	printf("%s\n", ft_strnstr(str, need, 7));

	return (0);
}*/
