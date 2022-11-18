/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_maj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad < kfouad@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:12:24 by kfouad            #+#    #+#             */
/*   Updated: 2022/11/01 16:18:29 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_maj(unsigned int c)
{
	char	*str;
	int		count;

	str = "0123456789ABCDEF";
	count = 0;
	if (c >= 16)
	{
		count += ft_put_hex_maj(c / 16);
		count += ft_put_hex_maj(c % 16);
	}
	else
		count += ft_putchar(str[c]);
	return (count);
}
