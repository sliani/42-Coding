# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sliani <sliani@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/05 20:44:21 by sliani            #+#    #+#              #
#    Updated: 2015/11/05 20:44:23 by sliani           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ft_tools.c opperations.c exec_opperation.c main.c

OBJ = ft_tools.o opperations.o exec_opperation.o main.o

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
