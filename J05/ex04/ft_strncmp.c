/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 18:41:10 by sliani            #+#    #+#             */
/*   Updated: 2015/10/20 14:58:18 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
}
