/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmystr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakpulat <bakpulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:44:21 by bakpulat          #+#    #+#             */
/*   Updated: 2024/11/28 10:18:24 by bakpulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printmystr(char *a)
{
	int		i;
	char	*nullarray;

	i = 0;
	if (a == NULL)
	{
		nullarray = "(null)";
		while (*nullarray)
		{
			ft_printmychar((int)*nullarray);
			nullarray++;
		}
		return (6);
	}
	while (a[i])
	{
		ft_printmychar((int)a[i]);
		i++;
	}
	return (i);
}
