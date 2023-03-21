/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:03:22 by hmeftah           #+#    #+#             */
/*   Updated: 2023/03/20 19:26:12 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_putnbr(int n)
{
	long	number;
	int		counter;

	counter = 0;
	number = (long)n;
	if (number == -2147483648)
		counter = ft_putstr("-2147483648");
	else if (number < 0)
	{
		counter += ft_putchar('-');
		counter += ft_putnbr(-number);
	}
	else if (number >= 10)
	{
		counter += ft_putnbr(number / 10);
		counter += ft_putnbr(number % 10);
	}
	else
	{
		counter += ft_putchar(number + '0');
	}
	return (counter);
}
