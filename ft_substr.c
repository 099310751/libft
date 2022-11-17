/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:13:07 by manvkhac          #+#    #+#             */
/*   Updated: 2022/04/02 00:07:41 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;
	size_t	i;

	if (start >= ft_strlen(s))
		len = 0;
	else
		ptr = (char *)s + start;
	i = -1;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (++i < len && *(ptr + i))
	{
		str[i] = *(ptr + i);
	}
	str[i] = '\0';
	return (str);
}
