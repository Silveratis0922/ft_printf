/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:09:59 by tchantro          #+#    #+#             */
/*   Updated: 2022/06/17 17:20:37 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_puthexa_fd(unsigned int n,char *str, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
int	ft_putnbr_unsigned_fd(unsigned int n, int fd);

#endif
