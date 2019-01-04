/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 16:28:26 by sliani            #+#    #+#             */
/*   Updated: 2015/11/03 18:20:43 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c);

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	if (i < 2)
		return (0);
	return (i);
}

int		ft_verif(char *str)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') || (str[0] == '\0'
					|| str[1] == '\0'))
			return (0);
		if (str[i] < 32 || str[i] == 127)
			return (0);
		while (str[n] != '\0')
		{
			if (str[i] == str[n] && str[i] != '\0')
				return (0);
			n++;
		}
		i++;
		n = i + 1;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	unsigned int i;

	if (ft_verif(base) && ft_strlen(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		i = nbr;
		if (i >= ft_strlen(base))
		{
			ft_putnbr_base(i / ft_strlen(base), base);
			ft_putnbr_base(i % ft_strlen(base), base);
		}
		else
			ft_putchar(base[i]);
	}
}
