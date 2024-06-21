/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:17:15 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/18 09:14:57 by sbourziq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	stoin(char *str)
{
	int	len;
	int	number;

	len = 0;
	number = 0;
	while (str[len] == ' ' || str[len] == '\t')
		len++;
	while (str[len] >= 48 && str[len] <= 57)
	{
		number = number * 10 + (str[len] - 48);
		len++;
	}
	return (number);
}

void	printing(int x, char a, char sb, char c)
{
	int	n;

	n = 0;
	while (n <= x - 1)
	{
		if (n == 0)
			ft_putchar(a);
		else if (n == x - 1)
			ft_putchar(c);
		else
			ft_putchar(sb);
		n++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i <= y - 1)
	{
		if (i == 0)
			printing(x, 'A', 'B', 'C');
		else if (i == y - 1)
			printing(x, 'C', 'B', 'A');
		else
			printing(x, 'B', ' ', 'B');
		i++;
	}
}
