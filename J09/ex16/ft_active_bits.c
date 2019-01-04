/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 19:54:57 by sliani            #+#    #+#             */
/*   Updated: 2015/10/22 20:05:41 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				convert(int nbr, char *base, int *nbr_final)
{
	int size_base;
	int i;

	i = 0;
	size_base = 0;
	while (base[size_base])
		size_base++;
	while (nbr)
	{
		nbr_final[i] = nbr % size_base;
		nbr = nbr / size_base;
		i++;
	}
	return (i);
}

unsigned int	ft_active_bits(int value)
{
	int				nbr_final[100];
	char			base[];
	int				i;
	unsigned int	active_bits;
	int				negativ;

	i = 0;
	negativ = 0;
	active_bits = 0;
	base = "01";
	if (value < 0)
	{
		negativ = 1;
		value = -value;
	}
	i = convert(value, base, nbr_final);
	while (--i >= 0)
		active_bits = active_bits + (base[nbr_final[i]] - 48);
	if (negativ == 1)
		return (32 - active_bits + 1);
	return (active_bits);
}
