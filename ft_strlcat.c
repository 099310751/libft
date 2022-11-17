/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 01:55:51 by manvkhac          #+#    #+#             */
/*   Updated: 2022/10/11 15:45:08 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldst;
	size_t	lsrc;
	int		total;

	i = 0;
	j = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size > ldst)
		total = ldst + lsrc;
	else
		total = lsrc + size;
	j = ldst;
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (total);
}
