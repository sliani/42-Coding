# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sliani <sliani@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/05 20:42:32 by sliani            #+#    #+#              #
#    Updated: 2015/11/05 20:42:42 by sliani           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOM = libft.a

FT_C = srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_strcmp.c \
	 srcs/ft_putstr.c

FT_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NOM)

$(NOM):
	gcc -c -Wall -Wextra -Werror -I includes $(FT_C)
	ar rc $(NOM) $(FT_O)

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f $(NOM)

re: fclean all
