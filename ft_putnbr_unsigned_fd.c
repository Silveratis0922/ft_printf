/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:39:13 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/17 16:48:39 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	nbr_len_unsigned(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i = i * 10;
	}
	return (i);
}

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	int		i;
	long	j;
	int	a;

	j = (long)n;
	i = nbr_len_unsigned(j);
	a = 0;
	while (i != 0)
	{
		ft_putchar_fd(j / i + '0', fd);
		j = j % i;
		i = i / 10;
		a++;
	}
	return (a);
}
