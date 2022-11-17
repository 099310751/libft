/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:58:34 by manvkhac          #+#    #+#             */
/*   Updated: 2022/03/17 03:04:50 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && c < n -1)
	{
		s1++;
		s2++;
		c++;
	}
	return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
}
