/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:52:54 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/01 23:18:57 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	checker(char *base)
{
	int	len;
	int	j;

	len = 0;
	if (base[1] == '\0' || base[0] == '\0')
		return (0);
	while (base[len])
	{
		if (base[len] <= 32 || base[len] == 127
			|| base[len] == '-' || base[len] == '+')
			return (0);
		j = len + 1;
		while (base[j])
		{
			if (base[j] == base[len])
				return (0);
			j++;
		}
		len++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			l_base;
	int long	nb;

	nb = nbr;
	l_base = ft_strlen(base);
	if (checker(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < l_base)
			ft_putchar(base[nb]);
		if (nb >= l_base)
		{
			ft_putnbr_base(nb / l_base, base);
			ft_putnbr_base(nb % l_base, base);
		}
	}
}
