/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:08:48 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/12 12:16:22 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	*word_duplicate(const char *start, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**split_words(char **result, const char *s, char c, size_t i)
{
	int			len;
	const char	*start;

	while (*s != '\0')
	{
		if (*s != c)
		{
			start = s;
			len = 0;
			while (*s != c && *s != '\0')
			{
				len++;
				s++;
			}
			result[i] = word_duplicate(start, len);
			if (result[i] == NULL)
				return (ft_free(&result[i], i), NULL);
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char		**result;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (result == NULL)
		return (NULL);
	split_words(result, s, c, 0);
	return (result);
}

/*int	main(void)
{
	char	**result;
	int		i;
	char	s[] = "Eu amo  estudar e vou terminar o commom core";
	char	c;

	c = ' ';
	i = 0;
	result = ft_split(s, c);
	while (result[i] != NULL)
	{
		printf("result[%d] = %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
