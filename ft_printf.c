/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:10:08 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/17 17:09:08 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*static int	nbr_size_int(int nbr)
{
	int	length;

	length = 1;
	while (nbr / 10 != 0)
	{
		nbr = nbr / 10;
		length++;
	}
	return (length);
}

static int	nbr_size_unsigned(char c,unsigned int nbr)
{
	unsigned int	length;

	length = 1;
	if (c == 'x' || c == 'X')
	{
		while (nbr / 16 != 0)
		{
			nbr = nbr / 16;
			length++;
		}
	}
	else
	{
		while (nbr / 10 != 0)
		{
			nbr = nbr / 10;
			length++;
		}
	}
	return (length);
}

static int	size_count(const char *s, int i, int size, va_list args)
{
	if (s[i] == 'c' || s[i] == '%')
		return (size + 1);
	else if (s[i] == 's')
		return (size + ft_strlen((char *)args));
	//else if (s[i] == 'p')
	else if (s[i] == 'd' || s[i] == 'i')
		return (size + nbr_size_int(va_arg(args, int)));
	else if (s[i] == 'u' || s[i] == 'x' || s[i] == 'X')
		return (size + nbr_size_unsigned(s[i], (va_arg(args, unsigned int))));
	else
		return (0);
}*/

int	converts(const char *s, int i, va_list args)
{
	if (s[i] == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (s[i] == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	//else if (s[i] == 'p')
	else if (s[i] == 'd' || s[i] == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (s[i] == 'u')
		return (ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1));
	/*else if (s[i] == 'x')
		ft_puthexa_fd(va_arg(args, int), "0123456789abcdef", 1);
	else if (s[i] == 'X')
		ft_puthexa_fd(va_arg(args, int), "0123456789ABCDEF", 1);*/
	else if (s[i] == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
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
			ft_putchar_fd(s[i], 1);
			size++;
		}
		else if (s[i] == '%')
		{
			i++;
			size = size + converts(s, i, args);
			//size_count(s, i, size, args);	
		}
		i++;
	}
	va_end(args);
	if (s == NULL)
		size = -1;
	return (size);
}

int	main()
{
//	ft_printf("test i:%i\ntest x:%x\ntest d:%d\ntest c:%c\ntest u:%u\ntest s:%s\n test X:%X\ntest %:%%", 896, 1478 , -102, 'f', 963852, "Tristan", 7412);
	char	*str = NULL;
	//printf("%d\n", ft_printf("test s:%s", str));	
	printf("%d\n", printf("test s:%s", str));
	return (0);
}
