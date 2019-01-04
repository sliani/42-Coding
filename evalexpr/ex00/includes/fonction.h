/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 20:52:33 by sliani            #+#    #+#             */
/*   Updated: 2015/11/01 21:08:25 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTION_H
# define FONCTION_H

# include <unistd.h>

# include <stdlib.h>

int		find_nbr(char **str);

int		partial_eval(char **str);

int		eval_bis(char **str);

int		do_op(char op, int f, int s);

char	*sup_spaces(char *str);

void	ft_putchar(char c);

int		ft_strlen(char *str);

void	ft_putnbr(int nb);

#endif
