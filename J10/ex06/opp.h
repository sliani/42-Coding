/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:44:50 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:44:51 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPP_H

# define OPP_H

# define DIV_ERR "Stop : division by zero\n"

# define MOD_ERR "Stop : modulo by zero\n"

typedef	struct	s_operation
{
	char		op;
	int			(*operation)(int, int);
}				t_operation;

void			ft_putchar(char c);

int				ft_strlen(char *str);

int				ft_atoi(char *str);

void			ft_putnbr(int nbr);

void			ft_putstr(char *str);

int				addition(int val1, int val2);

int				soustraction(int val1, int val2);

int				multiplication(int val1, int val2);

int				division(int val1, int val2);

int				modulo(int val1, int val2);

int				do_op(char *val1, char *oper, char *val2);

#endif
