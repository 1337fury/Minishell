/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:20:53 by hmeftah           #+#    #+#             */
/*   Updated: 2023/03/20 19:25:52 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include "ft_printf.h"

int	ft_putbase(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n < 16)
	{
		counter += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	else if (n <= 9)
		counter += ft_putnbr(n);
	else
	{
		counter += ft_putbase(n / 16);
		counter += ft_putbase(n % 16);
	}
	return (counter);
}
