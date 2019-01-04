/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:41:12 by sliani            #+#    #+#             */
/*   Updated: 2015/11/07 16:14:01 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	list_push_front(t_list **begin_list, void *data)
{
	t_list	*rest;

	rest = *begin_list;
	*begin_list = ft_create_elem(data);
	(*begin_list)->next = rest;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*s1;
	int		i;

	i = -1;
	s1 = 0;
	while (++i < ac)
		list_push_front(&s1, av[i]);
	return (s1);
}
