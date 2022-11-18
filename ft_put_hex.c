/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad < kfouad@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:08:36 by kfouad            #+#    #+#             */
/*   Updated: 2022/11/03 19:01:37 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long c)
{
	char	*str;
	int		count;

	str = "0123456789abcdef";
	count = 0;
	if (c >= 16)
	{
		count += ft_put_hex(c / 16);
		count += ft_put_hex(c % 16);
	}
	else
		count += ft_putchar(str[c]);
	return (count);
}
