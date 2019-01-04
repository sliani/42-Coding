/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:24:27 by sliani            #+#    #+#             */
/*   Updated: 2015/11/07 16:40:41 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		verify_pos(int *tab, int pos)
{
	int i;

	i = 0;
	while (i++ < pos)
	{
		if (tab[i] == tab[pos])
			return (0);
		if (tab[i] + i == tab[pos] + pos)
			return (0);
		if (tab[i] - i == tab[pos] - pos)
			return (0);
	}
	return (1);
}

void	ft_eight_queens_puzzle_2(int *tab, int pos)
{
	int	i;

	if (pos == 8)
	{
		i = 0;
		while (i++ < 8)
			ft_putchar(tab[i] + '1');
		ft_putchar('\n');
	}
	tab[pos] = 0;
	while (tab[pos] < 8)
	{
		if (verify_pos(tab, pos) == 1)
			ft_eight_queens_puzzle_2(tab, pos + 1);
		tab[pos]++;
	}
}
