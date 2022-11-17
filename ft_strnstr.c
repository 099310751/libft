/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 04:57:24 by manvkhac          #+#    #+#             */
/*   Updated: 2022/04/02 02:18:50 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	int		length;
	char	*large;
	char	*small;

	if (*s2 == '\0')
		return ((char *)s1);
	large = (char *)s1;
	small = (char *)s2;
	i = 0;
	length = ft_strlen(small);
	while (large[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((large + i), small, length) == 0)
			return (large + i);
				i++;
	}
	return (NULL);
}
