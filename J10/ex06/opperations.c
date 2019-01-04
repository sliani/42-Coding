/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opperations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:45:06 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:45:07 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opp.h"

int		addition(int val1, int val2)
{
	return (val1 + val2);
}

int		soustraction(int val1, int val2)
{
	return (val1 - val2);
}

int		multiplication(int val1, int val2)
{
	return (val1 * val2);
}

int		division(int val1, int val2)
{
	return (val1 / val2);
}

int		modulo(int val1, int val2)
{
	return (val1 % val2);
}
