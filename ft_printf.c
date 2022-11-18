/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad < kfouad@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:48:45 by kfouad            #+#    #+#             */
/*   Updated: 2022/11/12 17:31:19 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_printf(char s, va_list arg)
{
	int		count;

	count = 0;
	if (s == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (s == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (s == 'p')
		count += ft_putptr(va_arg(arg, unsigned long));
	else if (s == 'd' || s == 'i')
		count += ft_putnbr(va_arg(arg, long));
	else if (s == 'u')
		count += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (s == 'x')
		count += ft_put_hex(va_arg(arg, unsigned int));
	else if (s == 'X')
		count += ft_put_hex_maj(va_arg(arg, int));
	else
		count += ft_putchar(s);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != '%')
			count += ft_putchar(s[i]);
		else
			count += check_printf(s[++i], arg);
		i++;
	}
	va_end(arg);
	return (count);
}
