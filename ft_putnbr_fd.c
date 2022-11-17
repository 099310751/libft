/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 02:39:23 by manvkhac          #+#    #+#             */
/*   Updated: 2022/04/12 10:40:21 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		number = -n;
	}
	else
	{
		number = n;
	}
	if (number >= 10)
		ft_putnbr_fd (number / 10, fd);
	ft_putchar_fd ((number % 10) + '0', fd);
}
