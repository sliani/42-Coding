/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 16:57:45 by sliani            #+#    #+#             */
/*   Updated: 2015/10/18 15:40:58 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 13 && nb >= 0)
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
	else
		return (0);
	return (result);
}
