/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 15:36:13 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 22:21:58 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*cd;
	char			*cs;
	unsigned int	len;

	cd = dest;
	cs = src;
	len = size;
	if (len != 0)
	{
		while (--len != 0)
		{
			if ((*cd++ = *cs++) == '\0')
				break ;
		}
	}
	if (len == 0)
	{
		if (size != 0)
			*cd = '\0';
		while (*cs++)
			;
	}
	return (cs - src - 1);
}
