/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:32:49 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:32:51 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = nb;
	i = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 1)
	{
		result = result * nb;
		i--;
	}
	return (result);
}

void	ft_strlen(char *str, char *str2, int *i, int *j)
{
	*i = 0;
	*j = 0;
	while (str[*i] != '\0')
		*i = *i + 1;
	while (str2[*j] != '\0')
		*j = *j + 1;
}

void	ft_putnbr(int nb, char *str, int i, char *base_to)
{
	int len_base;

	len_base = 0;
	while (base_to[len_base] != '\0')
		len_base++;
	if (nb <= len_base)
		str[i] = base_to[nb];
	else
	{
		if (nb / len_base <= len_base)
			ft_putnbr(nb / len_base, str, i + 1, base_to);
		else
			ft_putnbr(nb / len_base, str, i + 1, base_to);
		ft_putnbr(nb % len_base, str, i, base_to);
	}
}

char	*ft_base_ten_base_to(int nbr, char *base_to)
{
	char	*nb;
	int		i;
	int		j;
	int		len;
	char	tmp;

	i = 0;
	len = 0;
	nb = (char*)malloc(sizeof(char) * 12);
	ft_putnbr(nbr, nb, 0, base_to);
	while (nb[len + 1] != '\0')
		len++;
	j = len;
	while (i <= len / 2)
	{
		tmp = nb[i];
		nb[i] = nb[j];
		nb[j] = tmp;
		i++;
		j--;
	}
	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int base_from_nbr;
	int nbr_length;
	int i;
	int j;
	int result;

	ft_strlen(nbr, base_from, &nbr_length, &base_from_nbr);
	result = 0;
	i = 0;
	while (nbr[i] != '\0')
	{
		j = 0;
		while ((nbr[i] != base_from[j]) && (base_from[j] != '\0'))
			j++;
		result += (j *
			ft_iterative_power(base_from_nbr, (nbr_length - (i + 1))));
		i++;
	}
	return (ft_base_ten_base_to(result, base_to));
}
