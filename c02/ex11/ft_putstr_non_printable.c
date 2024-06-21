/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:45:25 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/17 22:25:11 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 32 && str[n] <= 126)
		{
			ft_putchar(str[n]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[n] / 16]);
			ft_putchar("0123456789abcdef"[str[n] % 16]);
		}
		n++;
	}
}
