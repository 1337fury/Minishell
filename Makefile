# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:42:04 by hmeftah           #+#    #+#              #
#    Updated: 2023/03/21 16:17:51 by hmeftah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
CC = cc
FLAGS = -Wall -Werror -Wextra
INCLUDE = -I Minishell.h
LIBFT = ./Libc/Libft/libft.a ./Libc/ft_printf/libftprintf.a
MAIN = main.c
RDLINE = "-lreadline"

all: mand

mand: $(NAME)

$(NAME): $(MAIN) $(LIBFT) $(SOURCES_OBJ)
	$(CC) $(FLAGS) $(INCLUDE) $(RDLINE)  $(LIBFT) $(MAIN) -o $@

$(LIBFT):
	make -C ./Libc/Libft
	make -C ./Libc/ft_printf

clean:
	rm -rf ./Execution/*.o
	rm -rf ./Interpeter/*.o
	
fclean:
	rm -rf ./minishell
	make fclean -C ./Libc/Libft
	make fclean -C ./Libc/ft_printf

re: fclean clean all
.PHONY: all mand clean fclean re