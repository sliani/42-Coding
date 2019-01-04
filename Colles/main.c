/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgourran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 19:51:49 by pgourran          #+#    #+#             */
/*   Updated: 2015/08/23 23:16:53 by pgourran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "colle.h"

int		check_x(char *buf)
{
	int i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	return (i);
}

int		check_y(char *buf)
{
	int y;
	int i;

	i = -1;
	y = 0;
	while (buf[++i])
	{
		if (buf[i] == '\n')
			y++;
	}
	return (y);
}

void	dim(int x, int y)
{
	ft_putchar(' ');
	ft_putchar(91);
	ft_putnbr(x);
	ft_putchar(93);
	ft_putchar(' ');
	ft_putchar(91);
	ft_putnbr(y);
	ft_putchar(93);
}

void	oh_yeah(char *buf, int x, int y, int qtchar)
{
	if (ft_strcmp(buf, colle00(x, y, qtchar)) == 0)
		write(1, "[colle-00]", 10);
	else if (ft_strcmp(buf, colle01(x, y, qtchar)) == 0)
		write(1, "[colle-01]", 10);
	else if ((ft_strcmp(buf, colle02(x, y, qtchar)) == 0)
			&& (ft_strcmp(buf, colle03(x, y, qtchar)) == 0)
			&& (ft_strcmp(buf, colle04(x, y, qtchar)) == 0))
		write(1, "[colle-02] || [colle03] || [colle04]", 36);
	else if ((ft_strcmp(buf, colle02(x, y, qtchar)) == 0)
			&& (ft_strcmp(buf, colle03(x, y, qtchar)) == 0))
		write(1, "[colle-02] || [colle03]", 23);
	else if (ft_strcmp(buf, colle02(x, y, qtchar)) == 0)
		write(1, "[colle-02]", 10);
	else if (ft_strcmp(buf, colle02(x, y, qtchar)) == 0)
		write(1, "[colle-02]", 10);
	else if (ft_strcmp(buf, colle03(x, y, qtchar)) == 0)
		write(1, "[colle-03]", 10);
	else if (ft_strcmp(buf, colle04(x, y, qtchar)) == 0)
		write(1, "[colle-04]", 10);
	else
	{
		write(1, "aucune", 6);
		return ;
	}
	dim(x, y);
}

int		main(void)
{
	char	buf[5000000];
	int		qtchar;
	int		x;
	int		y;

	while ((qtchar = read(0, buf, 5000001)))
		buf[qtchar] = '\0';
	x = check_x(buf);
	y = check_y(buf);
	oh_yeah(buf, x, y, qtchar);
	write(1, "\n", 1);
	return (0);
}
