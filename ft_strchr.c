/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:08:17 by manvkhac          #+#    #+#             */
/*   Updated: 2022/03/17 03:30:46 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	letter;

	letter = c;
	if (letter == '\0')
	{
		s += (ft_strlen(s));
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == letter)
			return ((char *)s);
		s++;
	}
	return (0);
}
