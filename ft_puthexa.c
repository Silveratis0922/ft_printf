/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:04:06 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/17 17:31:50 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	nbr_lenhexa(unsigned int n)
{
	int	i;

	i = 1;
	while (n / 16 != 0)
	{
		n = n / 16;
		i = i * 16;
	}
	return (i);
}

int	ft_puthexa_fd(unsigned int n, char *str, int fd)
{
	int	i;
	int	a;

	a = 0;
	i = nbr_lenhexa(n);
	while (i != 0)
	{
		ft_putchar_fd(str[n / i], fd);
		n = n % i;
		i = i / 16;
		a++;
	}
	return (a);
}
/*
int	main()
{
	int test = 0;

	ft_puthexa_fd(test, "0123456789abcdef", 1);
	return (0);
}*/
