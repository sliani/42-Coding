/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:45:38 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:45:40 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s2[i] - s1[i] != 0)
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

int		tab_is_sort(char **tab)
{
	int		i;

	i = 0;
	while (*(tab + i + 1) != NULL)
	{
		if (ft_strcmp(*(tab + i), *(tab + i + 1)) < 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*tmp;

	while (!tab_is_sort(tab))
	{
		i = 0;
		while (*(tab + i + 1) != NULL)
		{
			if (ft_strcmp(*(tab + i), *(tab + i + 1)) < 0)
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = tmp;
			}
			i++;
		}
	}
}
