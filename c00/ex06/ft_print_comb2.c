/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:33:49 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/14 20:41:02 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_handler(int x, int y)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	ft_putchar(' ');
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
	if (x != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			print_handler(x, y);
			y++;
		}
		x++;
	}
}
