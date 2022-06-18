/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_pointer_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:55:47 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/18 11:26:54 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	p_pointer_fd(long unsigned int n, char *str, int fd)
{
	int	a;

	if (n == 0)
	{
		ft_putstr_fd("(nil)", fd);
		return (5);
	}
	else
	{
		a = 2;
		ft_putstr_fd("0x", 1);
		a = a + ft_puthexa_fd(n, str, fd);
	}
	return (a);
}
