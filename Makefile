# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 19:10:20 by yojablao          #+#    #+#              #
#    Updated: 2023/12/13 21:03:24 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRS = ft_atoi.c ft_printf.c ft_putstr.c ft_putu.c ft_putnbr.c ft_specifier.c ft_putchar.c 
OBS = $(SRS: %.c : %.o)
