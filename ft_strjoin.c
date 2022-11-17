/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 03:23:40 by manvkhac          #+#    #+#             */
/*   Updated: 2022/10/11 15:45:12 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s1)
		while (s1[i])
			i++;
	if (s2)
		while (s2[j])
			j++;
	str = (char *)malloc(i + j + 1);
	if (str == NULL)
		return (NULL);
	ft_memmove(str, s1, i + 1);
	ft_strlcat(str, s2, i + j + 1);
	return (str);
}
