/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:47:09 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:47:43 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opp.h"

int		main(int argc, char **argv)
{
	if (argc == 4 && check_args(argv[2], argv[3]))
	{
		ft_putnbr(do_op(argv[1], argv[2], argv[3]));
		ft_putchar('\n');
	}
	return (0);
}
