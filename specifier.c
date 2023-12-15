/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:04:28 by yojablao          #+#    #+#             */
/*   Updated: 2023/12/15 19:04:06 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int specifier(char c, va_list arg)
{
	int cont;

	cont = 0;
	if (c == 'c')
		cont = ft_putchar(va_arg(arg, int));
	if (c == 's')
		cont = ft_putstr(va_arg(arg, char *));
	if (c == 'd' || c == 'i')
		cont =ft_putnbr(va_arg(arg, int));
	if (c == 'u')
		cont = ft_putu(va_arg(arg, unsigned int));
	if (c == 'x')
		cont = hex(va_arg(arg, unsigned int));
	if (c == 'X')
		cont = uperhex(va_arg(arg, unsigned int));
	if (c == 'p')
	{
		cont = ft_putstr("0x");
		cont += hex(va_arg(arg, long));
	}
	return (cont);
}
