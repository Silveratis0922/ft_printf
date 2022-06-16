/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:10:08 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/16 11:56:54 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*static int	nbr_size(char c, size_t nbr)
{
	size_t	length;

	length = 1;
	if (nbr < 0)
		length = 2;
	if (c == 'x' || c == 'X')
		while (nbr / 16 != 0)
		{
			nbr = nbr / 16;
			length++;
		}
	else
		while (nbr / 10 != 0)
		{
			nbr = nbr / 10;
			length++;
		}
	return (length);
}
*/
void	ft_hexa_base(int nbr, char *hexa)
{
	
}
/*
static int	size_count(char c, int size, va_list args)
{
	if (c == "c" || c == "%")
		return (size + 1);
	else if (c == "s")
		return (size + ft_strlen(args));
	else if (c == "p")
	else if (c == "d" || c == "i")
		return (size + nbr_size(c, (int)args));
	else if (c == "u")
		return (size + nbr_size(c, (unsigned int)args));
	else if (c == "x" || c == "X")
		return (size + nbr_size(c, (int)args));
}

void	converts(char c)
{
	if (s[i] == "c")
		ft_putchar_fd(va_arg(args, int) 1);
	else if (s[i] == "s")
		ft_putstr_fd(va_arg(args, char *) 1);
	else if (s[i] == "p")
	else if (s[i] == "d")
		ft_putnbr_fd(va_arg(args, int) 1);
	else if (s[i] == "i")
		ft_putnbr_fd(va_arg(args, int) 1);
	else if (s[i] == "u")
		ft_putnbr_fd(va_arg(args, unsigned int) 1);
	else if (s[i] == "x")
		ft_putnbr_(va_arg(args, int) "0123456789abcdef");
	else if (s[i] == "X")
		ft_hexa_base(va_arg(args, int) "0123456789ABCDEF"); 
	else if (s[i] == "%")
		ft_putchar_fd('%', 1);
	else
		return ;
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int	i;

	int size;
	size = 0;
	va_start(args, s);
	i = 0;
	while (s[i])
	{
		if (s[i] != '%')
		{
			ft_putchar_fd(va_arg(args, int) 1);
			size++;
		}
		else
		{
			//printf("tu es une %s combien vous etes %d", "salope", 42);
			i++;
			converts(&s[i]);
			size_count(&s[i], size);
		}
		i++;
	}
	va_end(args);
	return (size);
}
*/
int	main()
{
	int	test = 386;

	ft_hexa_base('x', test);
	return (0);
}
