/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 17:00:14 by sliani            #+#    #+#             */
/*   Updated: 2015/10/18 18:04:05 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int d;

	i = 1;
	d = 1;
	while ((d * d) != nb)
	{
		d = nb / i;
		i++;
		if (i - 1 > (nb / 2))
			return (0);
	}
	return (d);
}
