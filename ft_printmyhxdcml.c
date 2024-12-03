/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmyhxdcml.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakpulat <bakpulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:27:44 by bakpulat          #+#    #+#             */
/*   Updated: 2024/11/28 09:47:55 by bakpulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned int number, const char format)
{
	if (number >= 16)
	{
		ft_put_hex(number / 16, format);
		ft_put_hex(number % 16, format);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd((number + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((number - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((number - 10 + 'A'), 1);
		}
	}
}

int	ft_printmyhxdcml(unsigned int number, const char format)
{
	if (number == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(number, format);
	return (ft_hexlen(number));
}
