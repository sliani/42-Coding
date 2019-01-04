/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:39:31 by sliani            #+#    #+#             */
/*   Updated: 2015/11/06 21:39:32 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		n;

	if (begin_list != NULL)
	{
		n = 1;
		tmp = begin_list;
		while (tmp->next != NULL)
		{
			n++;
			tmp = tmp->next;
		}
		return (n);
	}
	return (0);
}
