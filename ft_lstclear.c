/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 00:12:44 by manvkhac          #+#    #+#             */
/*   Updated: 2022/04/19 01:16:26 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!lst || !lst || !del)
		return ;
	while (*lst && lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst,*del);
		*lst = ptr;
	}
}
