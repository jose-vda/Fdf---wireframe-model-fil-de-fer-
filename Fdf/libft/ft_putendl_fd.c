/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:22:52 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 18:45:53 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char	*s;
	int		fd;

	s = "Eu amo estudar";
	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}*/
