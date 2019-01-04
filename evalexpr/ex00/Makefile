# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sliani <sliani@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/01 20:53:30 by sliani            #+#    #+#              #
#    Updated: 2015/11/02 10:33:19 by sliani           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
OFLAGS = -Wall -Werror -Wextra -o
CFLAGS = -Wall -Werror -Wextra -c
NAME = eval_expr
SRCS = srcs/fonction_base.c srcs/eval_expr.c srcs/do_sup.c

all: $(NAME)

$(NAME): point_o
	$(CC) $(OFLAGS) $(NAME) fonction_base.o eval_expr.o do_sup.o

point_o:
	$(CC) $(CFLAGS) $(SRCS)

clean:
	/bin/rm -f fonction_base.o eval_expr.o do_sup.o

fclean:
	/bin/rm -f fonction_base.o eval_expr.o do_sup.o $(NAME)

re: fclean all
