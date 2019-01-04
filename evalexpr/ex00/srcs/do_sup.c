/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 20:53:04 by sliani            #+#    #+#             */
/*   Updated: 2015/11/01 20:53:53 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fonction.h"

int		do_op(char op, int f, int s)
{
	if (op == '+')
		return (f + s);
	else if (op == '-')
		return (f - s);
	else if (op == '*')
		return (f * s);
	else if (op == '/')
		return (f / s);
	else if (op == '%')
		return (f % s);
	else
		return (0);
}

char	*sup_spaces(char *str)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	ret = malloc(ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			ret[j] = str[i];
			j++;
		}
		i++;
	}
	ret[j] = '\0';
	return (ret);
}
