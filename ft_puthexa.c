/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:04:06 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/17 14:27:59 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	nbr_lenhexa(int n)
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

void	ft_puthexa_fd(int n, char *str, int fd)
{
	int		i;
	long	j;

	j = (long)n;
	i = nbr_lenhexa(j);
	if (j < 0)
	{
		j = -j;
		ft_putchar_fd('-', fd);
	}
	while (i != 0)
	{
		ft_putchar_fd(str[j / i], fd);
		j = j % i;
		i = i / 16;
	}
}
/*
int	main()
{
	int test = -4589213;

	ft_puthexa(test, 1);
	return (0);
}*/
