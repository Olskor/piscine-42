# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 20:41:50 by jauffret          #+#    #+#              #
#    Updated: 2022/11/23 20:43:51 by jauffret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CFLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c operation.c ft_main.c

all: $(NAME)

$(NAME):
	cc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all