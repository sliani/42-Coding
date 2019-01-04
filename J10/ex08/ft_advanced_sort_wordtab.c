/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:45:49 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:45:51 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		tab_is_sort(char **tab, int (*cmp)(char *, char *))
{
	int		i;

	i = 0;
	while (*(tab + i + 1) != NULL)
	{
		if (cmp(*(tab + i), *(tab + i + 1)) > 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*tmp;

	while (!tab_is_sort(tab, cmp))
	{
		i = 0;
		while (*(tab + i + 1) != NULL)
		{
			if (cmp(*(tab + i), *(tab + i + 1)) > 0)
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = tmp;
			}
			i++;
		}
	}
}
