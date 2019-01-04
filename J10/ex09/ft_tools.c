/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:46:13 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:47:38 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define NEG_INT_MAX "-2147483648"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		signe;

	i = -1;
	res = 0;
	signe = 1;
	if (str[0] == '-')
	{
		signe = -1;
		i++;
	}
	while (str[++i] && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i] - '0');
	return (res * signe);
}

void	ft_putnbr(int nbr)
{
	int		max_int;

	max_int = 0;
	if (nbr < 0)
	{
		if (nbr == ft_atoi(NEG_INT_MAX))
		{
			max_int = 1;
			ft_putstr(NEG_INT_MAX);
		}
		else
		{
			ft_putchar('-');
			nbr = -nbr;
		}
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	if (!max_int)
		ft_putchar('0' + (nbr % 10));
}
