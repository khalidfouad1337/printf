/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad < kfouad@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:24:01 by kfouad            #+#    #+#             */
/*   Updated: 2022/11/08 12:38:43 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
		count += ft_putstr("(null)");
	while (str && str[i])
	{
		write(1, &str[i++], 1);
		count++;
	}
	return (count);
}
