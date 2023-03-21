# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 19:42:43 by hmeftah           #+#    #+#              #
#    Updated: 2023/03/18 11:54:33 by hmeftah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS =  -Wall -Wextra -Werror

SRC = ft_printf.c ft_putadress.c ft_putbase.c ft_putbase_low.c ft_putchar.c ft_putnbr.c \
	  ft_putnbr_unsigned.c ft_putstr.c
	  
OBJECTS = $(SRC:.c=.o)

INCLUDE = ./ft_printf.h

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar -r $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(FLAGS) -I $(INCLUDE) -c $<

clean : 
	rm -f $(OBJECTS)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re