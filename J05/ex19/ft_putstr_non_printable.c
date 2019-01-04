/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliani <sliani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 16:25:03 by sliani            #+#    #+#             */
/*   Updated: 2015/10/23 00:48:10 by sliani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_np(int c)
{
	if (c < 10)
		ft_putchar('0' + c);
	if (c >= 10 && c < 16)
		ft_putchar('a' + (c - 10));
	if (c >= 16)
	{
		print_np(c / 16);
		print_np(c % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int ascii;

	i = -1;
	while (str[++i])
	{
		ascii = (int)str[i];
		if (ascii > 31 && ascii != 127)
			ft_putchar(str[i]);
		if (ascii < 32 || ascii >= 127)
		{
			ft_putchar('\\');
			if (ascii < 16)
				ft_putchar('0');
			print_np(ascii);
		}
	}
}
