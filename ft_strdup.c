/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:00:37 by manvkhac          #+#    #+#             */
/*   Updated: 2022/04/12 11:13:48 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*ptr;
	size_t		lenght;

	lenght = ft_strlen(s1) + 1;
	ptr = malloc(sizeof(char) * lenght);
	ft_memcpy(ptr, s1, lenght);
	return ((char *)ptr);
}
