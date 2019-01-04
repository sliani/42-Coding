/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:41:37 by sliani            #+#    #+#             */
/*   Updated: 2015/11/06 21:41:39 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (*begin_list != NULL)
	{
		tmp1 = *begin_list;
		while (tmp1->next != NULL)
		{
			tmp2 = tmp1->next;
			free(tmp1);
			tmp1 = tmp2;
		}
		tmp2 = NULL;
		free(tmp1);
		*begin_list = NULL;
	}
}
