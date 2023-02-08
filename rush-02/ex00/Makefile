# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 09:37:58 by esuberbi          #+#    #+#              #
#    Updated: 2022/11/20 09:51:36 by esuberbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02

CURR_DIR = $(shell pwd)

CFLAGS += -Wall -Werror -Wextra

SRC = atoll.c \
	errorHandler.c \
	file.c \
	ft_split.c \
	lib.c \
	lib2.c \
	logic.c \
	main.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
	
