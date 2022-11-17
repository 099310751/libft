/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 02:40:57 by manvkhac          #+#    #+#             */
/*   Updated: 2022/03/16 23:19:55 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == (char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
