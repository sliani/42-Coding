/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:32:20 by sliani            #+#    #+#             */
/*   Updated: 2015/11/05 20:32:22 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str, int i)
{
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		i++;
	return (i + 1);
}

char	**ft_nbr_word(char *str, char **string_split)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			j++;
		i++;
	}
	j++;
	string_split = (char**)malloc(sizeof(char*) * j);
	return (string_split);
}

int		add_word(char *str, char *string_split, int i)
{
	int k;

	k = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		string_split[k] = str[i];
		k++;
		i++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**string_split;

	i = 0;
	j = 0;
	string_split = NULL;
	string_split = ft_nbr_word(str, string_split);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k = 0;
			string_split[j] = (char*)malloc(sizeof(char) * ft_strlen(str, i));
			i = add_word(str, string_split[j], i);
			j++;
		}
		else
			i++;
	}
	string_split[j] = NULL;
	return (string_split);
}
