/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:01:22 by manvkhac          #+#    #+#             */
/*   Updated: 2022/10/11 15:45:10 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	if (s > d)
	{
		while (len > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (s < d)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (d);
}
