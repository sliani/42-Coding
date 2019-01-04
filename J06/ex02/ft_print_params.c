/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 19:48:37 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 22:40:19 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	n = 0;
	while (i < argc)
	{
		while (argv[i][n])
		{
			ft_putchar(argv[i][n]);
			n++;
		}
		ft_putchar('\n');
		n = 0;
		i++;
	}
	return (0);
}
