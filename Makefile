# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/30 04:58:01 by vmistry           #+#    #+#              #
#    Updated: 2026/01/16 17:41:01 by vmistry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS := -Wall -Wextra -Werror
RM = rm -f
AR := ar rcs
SRC := ft_printf \
	ft_putchar \
	ft_puthex \
	ft_putnbr \
	ft_putstr \
	ft_putunbr

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re