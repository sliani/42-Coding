/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:44:35 by sliani            #+#    #+#             */
/*   Updated: 2015/11/07 15:46:06 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	void	*tmp;

	list = *begin_list;
	if (list)
	{
		while (list->next)
		{
			if (cmp(list->data, list->next->data) > 0)
			{
				tmp = list->next->data;
				list->next->data = list->data;
				list->data = tmp;
				list = *begin_list;
			}
			else
				list = list->next;
		}
	}
}
