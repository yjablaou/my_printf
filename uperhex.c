/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uperhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:55:32 by yojablao          #+#    #+#             */
/*   Updated: 2023/12/15 18:57:24 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int uperhex(unsigned long n)
{
	int			cont;
	const char	c[] = "0123456789ABCDEF";

	cont = 0;
	if (n >= 16)
	{
		cont += uperhex(n / 16);
		cont += uperhex(n % 16);
	}
	else
		cont += ft_putchar(c[n]);
	return (cont);
}
