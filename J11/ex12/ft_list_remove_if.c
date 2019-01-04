/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:43:48 by sliani            #+#    #+#             */
/*   Updated: 2015/11/07 16:45:13 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove(t_list **to_rm, t_list **nxt, t_list **begin_list)
{
	t_list	*tmp;

	if (*to_rm == *begin_list)
	{
		*begin_list = *nxt;
		free(*to_rm);
	}
	else
	{
		tmp = *begin_list;
		while (tmp->next != *to_rm)
			tmp = tmp->next;
		tmp->next = *nxt;
		free(*to_rm);
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *begin_list;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		if (cmp(tmp->data, data_ref) == 0)
			ft_list_remove(&tmp, &tmp2, begin_list);
		tmp = tmp2;
	}
}
