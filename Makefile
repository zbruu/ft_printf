# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-la-p <bde-la-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 10:22:30 by bde-la-p          #+#    #+#              #
#    Updated: 2025/05/14 10:38:12 by bde-la-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### ARGUMENTS ###

NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = cc

### SOURCES ###

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_hex_maj.c ft_putnbr_hex_min.c ft_putnbr_unsigned.c ft_putptr.c ft_putstr.c
OBJS = $(SRCS:.c=.o)

### RULES ###

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
