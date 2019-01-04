/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 20:36:51 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 20:48:01 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	i = argc - 1;
	n = 0;
	while (i > 0)
	{
		while (argv[i][n])
		{
			ft_putchar(argv[i][n]);
			n++;
		}
		ft_putchar('\n');
		n = 0;
		i--;
	}
	return (0);
}
