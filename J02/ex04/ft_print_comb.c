/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/06 21:43:31 by sliani            #+#    #+#             */
/*   Updated: 2015/10/16 12:27:01 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int nb;

	nb = 12;
	while (nb <= 789)
	{
		if (nb / 100 % 10 < nb / 10 % 10 && nb / 10 % 10 < nb % 10)
		{
			ft_putchar(nb / 100 % 10 + '0');
			ft_putchar(nb / 10 % 10 + '0');
			ft_putchar(nb % 10 + '0');
			if (nb != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		nb++;
	}
}
