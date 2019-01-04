/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 18:37:04 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 22:18:52 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*to;

	if (*to_find == '\0')
		return (str);
	to = to_find;
	while (*str != '\0')
	{
		if (*str == *to)
		{
			s = str;
			while (*s == *to || *to == '\0')
			{
				if (*to == '\0')
					return (str);
				s++;
				to++;
			}
			to = to_find;
		}
		str++;
	}
	return (0);
}
