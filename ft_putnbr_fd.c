/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:04:06 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/17 16:24:42 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	nbr_len(int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i = i * 10;
	}
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	j;
	int	a;

	j = (long)n;
	i = nbr_len(j);
	a = 0;
	if (j < 0)
	{
		j = -j;
		ft_putchar_fd('-', fd);
	}
	while (i != 0)
	{
		ft_putchar_fd(j / i + '0', fd);
		j = j % i;
		i = i / 10;
		a++;
	}
	if (n < 0)
		return (a + 1);
	return (a);
}
/*
int	main()
{
	int test = 0;

	ft_putnbr_fd(test, 1);
	return (0);
}*/
