/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 02:35:11 by manvkhac          #+#    #+#             */
/*   Updated: 2022/10/11 13:37:03 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(const char *s, char c)
{
	int		count;
	size_t	l;

	count = 0;
	l = 0;
	while (*s)
	{
		if (*s != c && l == 0)
		{
			l = 1;
			count++;
		}
		else if (*s == c)
			l = 0;
		s++;
	}
	return (count);
}

size_t	wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	num;
	size_t	len;
	size_t	n;

	if (!s)
		return (0);
	num = count(s, c);
	split = (char **)malloc(sizeof(char *) * (num +1));
	if (!split)
		return (0);
	n = 0;
	while (n < num)
	{
		while (*s == c)
			s++;
		len = wordlen(s, c);
		split[n] = (char *)malloc(sizeof(char) * (len +1));
		ft_strlcpy(split[n], (char *)s, len + 1);
		s = s + len;
		n++;
	}
	split[n] = 0;
	return (split);
}
