/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:24:48 by sliani            #+#    #+#             */
/*   Updated: 2015/11/07 15:25:04 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N9 "012345678, 012345679, 012345689, 012345789, 012346789, 012356789, "
#define N9_2 "012456789, 013456789, 023456789, 123456789"
#define SEP ", "

void	ft_putchar(char c);

char	g_tab[9];

int		g_nbr;

int		g_i;

int		g_tmp;

int		end_combs(int n)
{
	if ((g_nbr == 9 && n == 1) || (g_nbr == 89 && n == 2) ||
		(g_nbr == 789 && n == 3) || (g_nbr == 6789 && n == 4) ||
		(g_nbr == 56789 && n == 5) || (g_nbr == 456789 && n == 6) ||
		(g_nbr == 3456789 && n == 7) || (g_nbr == 23456789 && n == 8) ||
		(g_nbr == 123456789 && n == 9))
		return (1);
	if ((g_nbr > 9 && n == 1) || (g_nbr > 89 && n == 2) ||
		(g_nbr > 789 && n == 3) || (g_nbr > 6789 && n == 4) ||
		(g_nbr > 56789 && n == 5) || (g_nbr > 456789 && n == 6) ||
		(g_nbr > 3456789 && n == 7) || (g_nbr > 23456789 && n == 8) ||
		(g_nbr > 123456789 && n == 9))
		return (-1);
	return (0);
}

void	ft_print_tab(int n)
{
	int		i;

	i = 0;
	while ((i + 9 - n) < 9)
	{
		ft_putchar(g_tab[i + 9 - n]);
		i++;
	}
}

int		tab_is_sort(int n)
{
	int		i;

	i = 0;
	while ((i + 10 - n) < 9)
	{
		if (g_tab[i + 9 - n] >= g_tab[i + 10 - n])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_print_combn(int n)
{
	g_i = -1;
	while (++g_i < 9)
		g_tab[g_i] = '0';
	g_nbr = -1;
	if (n == 9)
	{
		ft_putstr(N9);
		ft_putstr(N9_2);
		return ;
	}
	while (++g_nbr >= 0 && end_combs(n) != -1)
	{
		g_tmp = g_nbr;
		g_i = 0;
		while (g_tmp && ++g_i)
		{
			g_tab[9 - g_i] = '0' + (g_tmp % 10);
			g_tmp = g_tmp / 10;
		}
		if (tab_is_sort(n))
			ft_print_tab(n);
		if (!end_combs(n) && tab_is_sort(n))
			ft_putstr(SEP);
	}
}
