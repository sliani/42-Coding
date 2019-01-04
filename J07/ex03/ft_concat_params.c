/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:32:08 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:32:10 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int lenght;

	i = 1;
	lenght = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			lenght++;
			j++;
		}
		lenght++;
		i++;
	}
	return (lenght);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		lenght;
	char	*arg;

	i = 1;
	lenght = 0;
	arg = (char*)malloc(sizeof(char) * ft_strlen(argc, argv));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			arg[lenght] = argv[i][j];
			j++;
			lenght++;
		}
		arg[lenght] = '\n';
		lenght++;
		i++;
	}
	arg[lenght - 1] = '\0';
	return (arg);
}
