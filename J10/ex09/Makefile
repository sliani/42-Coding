# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sliani <sliani@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/05 20:46:00 by sliani            #+#    #+#              #
#    Updated: 2015/11/05 20:47:31 by sliani           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRC = ft_tools.c operations.c exec_opperation.c main.c

OBJ = ft_tools.o operations.o exec_opperation.o main.o

CCFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(SRC)
	gcc -c $(CCFLAGS) $(SRC)
	gcc $(CCFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
