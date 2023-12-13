# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 19:10:20 by yojablao          #+#    #+#              #
#    Updated: 2023/12/13 21:27:00 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRS = 	ft_atoi.c\
 		ft_printf.c \
		ft_putstr.c \
		ft_putu.c \
		ft_putnbr.c \
		specifier.c \
		ft_putchar.c \
		ft_isdigit.c\

OBS = $(SRS:%c=%o)

CC = gcc

CFLAGS = -Wall -Wextra


all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBS)
	ar -r $(NAME) $(OBS)

		