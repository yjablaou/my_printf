/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:04:28 by yojablao          #+#    #+#             */
/*   Updated: 2023/12/13 19:04:29 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    specifier(char  c, va_list arg)
{

    if(c == 'c')
        ft_putchar(va_arg(arg , int));
    if(c == 's')
        ft_putstr(va_arg(arg,char *));
    if(c == 'd' || c =='i')
        ft_putnbr(va_arg(arg , int));
    if(c == 'u')
        ft_putu(va_arg(arg,unsigned int));
}
