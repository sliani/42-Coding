/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttrossea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 22:19:53 by ttrossea          #+#    #+#             */
/*   Updated: 2015/08/23 23:29:59 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*testeur2(int x, int y, char *str, int lin, int col, int i)
{
	while (lin != y)
	{
		while (col != x)
		{
			if ((col == 0 && lin == 0) || (col == x - 1 && lin == y - 1))
				str[i] = '/';
			else if ((col == 0 && lin == y - 1) || (col == x - 1 && lin == 0))
				str[i] = '\\';
			else if (col == 0 || col == x - 1 || lin == 0 || lin == y - 1)
				str[i] = '*';
			else
				str[i] = ' ';
			col++;
			i++;
		}
		str[i] = '\n';
		lin++;
		i++;
		col = 0;
	}
	str[i] = '\0';
		return (str);
}

char	*colle01(int x, int y, int size)
{
	int col;
	int lin;
	int i;
	char *str;

	str = malloc(size);
	i = 0;
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if (x <= 0 || y <= 0)
		str[i] = '\0';
	col = 0;
	lin = 0;
	str = testeur2(x, y, str ,lin ,col, i);
	return (str);
}
