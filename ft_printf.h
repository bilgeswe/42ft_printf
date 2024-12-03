/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakpulat <bakpulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:34:57 by bakpulat          #+#    #+#             */
/*   Updated: 2024/11/28 11:03:41 by bakpulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_declen(int number);
int		ft_printmychar(int c);
int		ft_printmystr(char *a);
int		ft_printmyptr(unsigned long long ptr);
void	ft_putchar_fd(char c, int fd);
int		ft_printmynbr(int a);
char	*ft_itoa(int n);
int		ft_printmyunsnbr(unsigned int n);
int		ft_hexlen(unsigned int number);
int		ft_printmyhxdcml(unsigned int number, const char format);
int		ft_catchchar(va_list args, const char format);
int		ft_printf(const char *str, ...);
char    *ft_strdup(char *src);
int     ft_printmypercent(int a);

#endif
