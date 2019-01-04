/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 18:39:23 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 14:51:00 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = dest;
	while (i < n && dest && src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n && dest && src)
	{
		dest[i] = '\0';
		i++;
	}
	return (ptr);
}
