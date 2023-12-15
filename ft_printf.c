/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:06:52 by yojablao          #+#    #+#             */
/*   Updated: 2023/12/15 19:14:40 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *form, ...)
{
	int i;
	int k;
	va_list args;

	k = 0;
	i = 0;
	va_start(args,form);

	while (form[i] != '\0')
	{
		if(form[i] == '%')
		{
			if(form[++i] == '%')
				k += ft_putchar(form[i]);
			else
				k += specifier(form[i],args);
		}
		else
			k += ft_putchar(form[i]);
		i++;
	}
	va_end(args);
	return(k);
}
