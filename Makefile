# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/30 04:58:01 by vmistry           #+#    #+#              #
#    Updated: 2026/01/17 19:17:33 by vmistry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
CC = cc
CFLAGS := -Wall -Wextra -Werror -fPIC
RM = rm -f
AR := ar -rcs
SRCS := ft_printf.c \
	ft_putcs.c \
	ft_puthp.c \
	ft_putidu.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $@ $(OBJS)

$(LIBFT): $(LIBFT_DIR)
	make all -C $<

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
