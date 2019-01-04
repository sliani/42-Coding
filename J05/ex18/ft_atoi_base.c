/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:03:44 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:10:15 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_val(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int		check_base(char *str, char *base)
{
	int i;
	int z;

	i = -1;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[++i])
		if (get_val(str[i], base) == -1 && str[i] != '-')
			return (0);
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = -1;
	while (base[++i])
	{
		z = i;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[++z])
			if (base[i] == base[z])
				return (0);
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	bsize;

	i = -1;
	bsize = 0;
	nb = 0;
	if (check_base(str, base))
	{
		if (str[0] == '+' || str[0] == '-')
			i++;
		while (base[bsize])
			bsize++;
		while (str[++i] && get_val(str[i], base) != -1)
			nb = nb * bsize + get_val(str[i], base);
		return (str[0] == '-' ? -nb : nb);
	}
	return (0);
}
