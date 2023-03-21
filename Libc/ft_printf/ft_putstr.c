/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:43:01 by hmeftah           #+#    #+#             */
/*   Updated: 2023/03/20 19:26:17 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (s != NULL)
	{
		while (*s)
		{
			counter += ft_putchar(*s);
			s++;
		}
	}
	else
		counter += ft_putstr("(null)");
	return (counter);
}
