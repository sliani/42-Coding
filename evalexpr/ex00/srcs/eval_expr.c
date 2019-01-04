/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 20:53:15 by sliani            #+#    #+#             */
/*   Updated: 2015/11/01 20:58:12 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fonction.h"

int		find_nbr(char **str)
{
	int s;
	int nb;

	nb = 0;
	s = 1;
	if ((*str)[0] == '-' || (*str)[0] == '+')
	{
		if ((*str)[0] == '-')
			s = -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(')
	{
		*str = *str + 1;
		nb = eval_bis(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (s * nb);
	}
	while ('0' <= (*str)[0] && (*str)[0] <= '9')
	{
		nb = (nb * 10) + ((*str)[0] - '0');
		*str = *str + 1;
	}
	return (s * nb);
}

int		partial_eval(char **str)
{
	int		fst_m;
	int		sec_m;
	char	op;

	fst_m = find_nbr(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		op = (*str)[0];
		*str = *str + 1;
		sec_m = find_nbr(str);
		fst_m = do_op(op, fst_m, sec_m);
	}
	return (fst_m);
}

int		eval_bis(char **str)
{
	int		fst_m;
	int		sec_m;
	char	op;

	fst_m = find_nbr(str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		op = (*str)[0];
		*str = *str + 1;
		if (op == '+' || op == '-')
			sec_m = partial_eval(str);
		else
			sec_m = find_nbr(str);
		fst_m = do_op(op, fst_m, sec_m);
	}
	return (fst_m);
}

int		eval_expr(char *str)
{
	str = sup_spaces(str);
	if (str[0] != '\0')
		return (eval_bis(&str));
	else
		return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
