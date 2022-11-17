/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:21:09 by manvkhac          #+#    #+#             */
/*   Updated: 2022/04/02 00:43:02 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 1;
	if (NULL == lst)
		return (0);
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
