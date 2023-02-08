# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jauffret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 14:19:54 by jauffret          #+#    #+#              #
#    Updated: 2022/11/23 13:14:20 by jauffret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = includes/

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

NAME = libft.a

RM = rm -f

CC = gcc

.c.o:
	${CC} ${CFLAG} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all : ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
