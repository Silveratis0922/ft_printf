/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:04:06 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/18 13:32:16 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	nbr_lenhexa(size_t n)
{
	size_t	i;

	i = 1;
	while (n / 16 != 0)
	{
		n = n / 16;
		i = i * 16;
	}
	return (i);
}

int	ft_puthexa_fd(size_t n, char *str, int fd)
{
	size_t	i;
	int		a;

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
