/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:20:53 by hmeftah           #+#    #+#             */
/*   Updated: 2023/03/20 19:25:39 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include "ft_printf.h"

static int	print_long(unsigned long i, int counter)
{
	if (i < 16)
		counter += ft_putchar("0123456789abcdef"[i % 16]);
	else
	{
		counter = print_long(i / 16, counter);
		counter = print_long(i % 16, counter);
	}
	return (counter);
}

int	ft_putadress(void *ptr)
{	
	long	i;
	int		counter;

	counter = 0;
	i = (unsigned long)ptr;
	counter += ft_putstr("0x");
	counter = print_long(i, counter);
	return (counter);
}
