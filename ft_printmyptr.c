/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmyptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakpulat <bakpulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:12:48 by bakpulat          #+#    #+#             */
/*   Updated: 2024/12/03 18:20:54 by bakpulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>
#include <unistd.h>

static void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printmyptr(unsigned long long ptr)
{
	int	length;

    uintptr_t ptrn = (uintptr_t)ptr;
	if (ptr == 0)
	{
		ft_printmystr("(nil)");
		return (5);
	}
	
    length = 0;
	length += write(1, "0x", 2);
	ft_put_ptr(ptrn);
	length += ft_hexlen(ptrn);
	return (length);
}
