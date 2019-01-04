# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsouleym <dsouleym@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/22 19:48:34 by dsouleym          #+#    #+#              #
#    Updated: 2015/08/23 23:13:15 by pgourran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = main.c \
	  colle00.c \
	  colle01.c \
	  colle02.c \
	  colle03.c \
	  colle04.c \
	  ft_strcmp.c \
	  ft_sup.c

BIN =  main.o \
	  colle00.o \
	  colle01.o \
	  colle02.o \
	  colle03.o \
	  colle04.o \
	  ft_strcmp.o \
	  ft_sup.o

INCLUDE = colle.h

all:
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(INCLUDE)
	gcc $(BIN) -o $(NAME)


clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean all
