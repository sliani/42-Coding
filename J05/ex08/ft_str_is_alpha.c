/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 14:50:24 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 15:09:37 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while ((str[i] >= 'A' && str[i] <= 'Z')
	|| (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}
