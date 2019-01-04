/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:42:19 by sliani            #+#    #+#             */
/*   Updated: 2015/11/06 21:42:20 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tpm;

	list = *begin_list;
	if (!list || !(list->next))
		return ;
	tmp = list->next;
	tpm = tmp->next;
	list->next = 0;
	tmp->next = list;
	while (tpm)
	{
		list = tmp;
		tmp = tpm;
		tpm = tmp->next;
		tmp->next = list;
	}
	*begin_list = tmp;
}
