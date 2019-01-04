/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 23:58:15 by sliani            #+#    #+#             */
/*   Updated: 2015/11/07 15:47:15 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*list_at(t_list *begin_list, unsigned int n)
{
	unsigned int	i;
	t_list			*list;

	i = -1;
	list = begin_list;
	if (!list)
		return ((t_list *)0);
	while (++i < n)
		list = list->next;
	return (list);
}

int					list_size(t_list *begin_list)
{
	t_list			*list;
	int				i;

	i = 0;
	list = begin_list;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

void				swap_list(t_list **list_one, t_list **list_two)
{
	void			*tmp_data;

	tmp_data = (*list_one)->data;
	(*list_one)->data = (*list_two)->data;
	(*list_two)->data = tmp_data;
}

void				ft_list_reverse_fun(t_list *begin_list)
{
	t_list			*tmp_1;
	t_list			*tmp_2;
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	len = list_size(begin_list);
	i = 0;
	j = len - 1;
	while (i != j && i != len / 2)
	{
		tmp_1 = list_at(begin_list, i);
		tmp_2 = list_at(begin_list, j);
		swap_list(&tmp_1, &tmp_2);
		i++;
		j--;
	}
}
