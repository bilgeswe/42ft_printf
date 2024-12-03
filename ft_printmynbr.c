/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmynbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakpulat <bakpulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:38:05 by bakpulat          #+#    #+#             */
/*   Updated: 2024/11/28 09:49:28 by bakpulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	ft_printmynbr(int a)
{
	int		length;
	char	*number;

	length = 0;
	number = ft_itoa(a);
	length = ft_printmystr(number);
	free(number);
	return (length);
}
