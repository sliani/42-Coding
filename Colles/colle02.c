/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttrossea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 22:26:08 by ttrossea          #+#    #+#             */
/*   Updated: 2015/08/23 23:35:44 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*testeur3(int x, int y, char *str, int lin, int col, int i)
{
	while (lin < y)
	{
		col = 0;
		while (col < x)
		{
			if ((col == 0 && lin == 0) || (col == x - 1 && lin == 0))
				str[i] = 'A';
			else if ((col == 0 && lin == y - 1) ||
				(col == x - 1 && lin == y - 1))
				str[i] = 'C';
			else if (col == 0 || col == x - 1 || lin == 0 || lin == y - 1)
				str[i] = 'B';
			else
				str[i] = ' ';
			col++;
			i++;
		}
		str[i] = '\n';
		i++;
		lin++;
	}
	str[i] = '\0';
	return (str);
}

char	*colle02(int x, int y, int size)
{
	int col;
	int lin;
	int i;
	char *str;

	i = 0;
	lin = 0;
	col = 0;
	str = malloc(size);
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if (x <= 0 || y <= 0)
		str[i] = '\0';
	str = testeur3(x, y, str, lin ,col ,i);
	return (str);
}
