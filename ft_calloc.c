/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 23:24:56 by manvkhac          #+#    #+#             */
/*   Updated: 2022/04/23 22:58:11 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	s = malloc (count * size);
	if (s)
		ft_bzero(s, count * size);
	return (s);
}
