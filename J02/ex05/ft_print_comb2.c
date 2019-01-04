/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 23:34:48 by sliani            #+#    #+#             */
/*   Updated: 2015/11/07 14:29:44 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 99)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar((nb1 / 10 % 10) + '0');
			ft_putchar((nb1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((nb2 / 10 % 10) + '0');
			ft_putchar((nb2 % 10) + '0');
			if (nb1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb2++;
		}
		nb1++;
	}
}
