/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:53:20 by hmeftah           #+#    #+#             */
/*   Updated: 2023/03/18 11:55:42 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "includes/libft.h"

static int	printassist(const char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		i += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (c == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (c == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (c == '%')
		i += ft_putchar('%');
	else if (c == 'x')
		i += ft_putbase_low(va_arg(args, unsigned int));
	else if (c == 'X')
		i += ft_putbase(va_arg(args, unsigned int));
	else if (c == 'p')
		i += ft_putadress(va_arg(args, void *));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			i += printassist(*(format + 1), args);
			format ++;
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
