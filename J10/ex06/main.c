/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:45:27 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:45:28 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opp.h"

int		check_args(char *oper, char *val2)
{
	if ((*oper != '-' && *oper != '+' && *oper != '*' &&\
		*oper != '/' && *oper != '%') || ft_strlen(oper) > 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	if (*oper == '/' && ft_atoi(val2) == 0)
	{
		ft_putstr(DIV_ERR);
		return (0);
	}
	if (*oper == '%' && ft_atoi(val2) == 0)
	{
		ft_putstr(MOD_ERR);
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 4 && check_args(argv[2], argv[3]))
	{
		ft_putnbr(do_op(argv[1], argv[2], argv[3]));
		ft_putchar('\n');
	}
	return (0);
}
