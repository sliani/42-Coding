/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_opperation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:45:17 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:45:19 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opp.h"

t_operation	g_op_tab[6];

void	init_op_tab(void)
{
	g_op_tab->op = '+';
	g_op_tab->operation = addition;
	(g_op_tab + 1)->op = '-';
	(g_op_tab + 1)->operation = soustraction;
	(g_op_tab + 2)->op = '*';
	(g_op_tab + 2)->operation = multiplication;
	(g_op_tab + 3)->op = '/';
	(g_op_tab + 3)->operation = division;
	(g_op_tab + 4)->op = '%';
	(g_op_tab + 4)->operation = modulo;
	(g_op_tab + 5)->op = '\0';
}

int		do_op(char *val1, char *oper, char *val2)
{
	int		v1;
	int		v2;
	int		i;

	init_op_tab();
	v1 = ft_atoi(val1);
	v2 = ft_atoi(val2);
	i = 0;
	while ((g_op_tab + i)->op != *oper)
		i++;
	return ((g_op_tab + i)->operation(v1, v2));
}
