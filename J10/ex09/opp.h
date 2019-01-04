/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:47:01 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:47:03 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPP_H

# define OPP_H

# define DIV_ERR "Stop : division by zero\n"

# define MOD_ERR "Stop : modulo by zero\n"

# define USAGE_1 "error : only [ "

# define USAGE_2 "] are accepted.\n"

typedef	struct	s_opp
{
	char		*op;
	int			(*operation)(int, int);
}				t_opp;

void			ft_putchar(char c);

int				ft_strlen(char *str);

int				ft_atoi(char *str);

void			ft_putnbr(int nbr);

void			ft_putstr(char *str);

int				ft_strcmp(char *s1, char *s2);

int				ft_add(int val1, int val2);

int				ft_sub(int val1, int val2);

int				ft_mul(int val1, int val2);

int				ft_div(int val1, int val2);

int				ft_mod(int val1, int val2);

int				do_op(char *val1, char *oper, char *val2);

int				check_args(char *oper, char *val2);

int				ft_usage(int blip, int blop);

#endif
