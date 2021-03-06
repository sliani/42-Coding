/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 14:57:55 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 15:13:25 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}
