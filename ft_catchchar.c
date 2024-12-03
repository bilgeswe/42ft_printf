/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catchchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakpulat <bakpulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:31:31 by bakpulat          #+#    #+#             */
/*   Updated: 2024/11/28 11:06:15 by bakpulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_catchchar(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_printmychar(va_arg(args, int));
	else if (format == 's')
		length += ft_printmystr(va_arg(args, char *));
	else if (format == 'p')
		length += ft_printmyptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		length += ft_printmynbr(va_arg(args, int));
	else if (format == 'u')
		length += ft_printmyunsnbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length += ft_printmyhxdcml(va_arg(args, unsigned int), format);
	else if (format == '%')
		length += ft_printmypercent(va_arg(args, int));
	return (length);
}
