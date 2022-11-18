/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad < kfouad@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:19:56 by kfouad            #+#    #+#             */
/*   Updated: 2022/11/03 19:03:47 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_put_hex(unsigned long c);
int	ft_put_hex_maj(unsigned int c);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr_u(unsigned int nb);
int	ft_printf(const char *s, ...);

#endif
