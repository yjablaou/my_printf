# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 19:10:20 by yojablao          #+#    #+#              #
#    Updated: 2023/12/15 19:23:38 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRS =	ft_printf.c \
		ft_putstr.c \
		ft_putu.c \
		ft_putnbr.c \
		specifier.c \
		ft_putchar.c \
		hex.c\
		uperhex.c\

OBS = $(SRS:%c=%o)

CC = cc

CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBS)
	ar -r $(NAME) $(OBS)
clean:
		rm -f $(OBS)
fclean: clean
	rm -f $(NAME)
re:fclean all
		