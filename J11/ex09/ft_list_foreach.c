/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:42:42 by sliani            #+#    #+#             */
/*   Updated: 2015/11/06 21:42:43 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
}
