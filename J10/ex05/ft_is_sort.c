/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:43:49 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:43:51 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		pattern;

	i = 0;
	if (length)
	{
		while (i < length - 1 && f(tab[i], tab[i + 1]) == 0)
			i++;
		if (i == length - 1)
			return (1);
		else
			pattern = f(tab[i], tab[i + 1]);
		if (pattern < 0)
			while (++i < length - 1)
				if (f(tab[i], tab[i + 1]) > 0)
					return (0);
		if (pattern > 0)
			while (++i < length - 1)
				if (f(tab[i], tab[i + 1]) < 0)
					return (0);
	}
	return (1);
}
