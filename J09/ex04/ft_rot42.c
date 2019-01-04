/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 18:11:52 by sliani            #+#    #+#             */
/*   Updated: 2015/10/23 16:51:12 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'J'))
			str[i] = (str[i] + 16);
		else if ((str[i] >= 'K') && (str[i] <= 'Z'))
			str[i] = (str[i] - 10);
		else if ((str[i] >= 'a') && (str[i] <= 'j'))
			str[i] = (str[i] + 16);
		else if ((str[i] >= 'k') && (str[i] <= 'z'))
			str[i] = (str[i] - 10);
		i++;
	}
	return (str);
}
