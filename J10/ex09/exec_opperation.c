/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_opperation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:47:21 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:47:50 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opp.h"

#include "ft_opp.h"

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		ft_usage(int blip, int blop)
{
	if (!blip && !blop)
	{
		ft_putstr(USAGE_1);
		while ((gl_opptab + blip)->operation != ft_usage)
		{
			ft_putstr((gl_opptab + blip)->op);
			ft_putchar(' ');
			blip++;
		}
		ft_putstr(USAGE_2);
	}
	return (0);
}

int		check_args(char *oper, char *val2)
{
	int		i;

	i = 0;
	while ((gl_opptab + i)->operation != ft_usage && \
			ft_strcmp((gl_opptab + i)->op, oper) != 0)
		i++;
	if ((gl_opptab + i)->operation == ft_usage)
	{
		ft_usage(0, 0);
		return (0);
	}
	if ((gl_opptab + i)->operation == ft_div && ft_atoi(val2) == 0)
	{
		ft_putstr(DIV_ERR);
		return (0);
	}
	if ((gl_opptab + i)->operation == ft_mod && ft_atoi(val2) == 0)
	{
		ft_putstr(MOD_ERR);
		return (0);
	}
	return (1);
}

int		do_op(char *val1, char *oper, char *val2)
{
	int		v1;
	int		v2;
	int		i;

	v1 = ft_atoi(val1);
	v2 = ft_atoi(val2);
	i = 0;
	while (ft_strcmp((gl_opptab + i)->op, oper) != 0)
		i++;
	return ((gl_opptab + i)->operation(v1, v2));
}
