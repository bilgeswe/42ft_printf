/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakpulat <bakpulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:52:52 by bakpulat          #+#    #+#             */
/*   Updated: 2024/11/28 09:30:42 by bakpulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_hexlen(unsigned int number)
{
	int	length;

	length = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		length++;
		number = number / 16;
	}
	return (length);
}
