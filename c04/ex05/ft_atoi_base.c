/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:10:49 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/27 14:43:39 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(char *base)
{
	int	l;
	int	j;

	l = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[l])
	{
		if (base[l] == '-' || base[l] == '+' || base[l] <= 32 || base[l] == 127)
			return (0);
		j = l + 1;
		while (base[j])
		{
			if (base[j] == base[l])
				return (0);
			j++;
		}
		l++;
	}
	return (l);
}

int	get_sign(char *str, int *pose_i)
{
	int	l;
	int	sign;

	l = 0;
	sign = 1;
	while (str[l] == ' ' || (str[l] >= 9 && str[l] <= 13))
		l++;
	while (str[l] && (str[l] == '+' || str[l] == '-'))
	{
		if (str[l] == '-')
			sign *= -1;
		l++;
	}
	*pose_i = l;
	return (sign);
}

int	get_number(char c, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb])
	{
		if (base[nb] == c)
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	l_base;
	int	helper;
	int	sign;
	int	i;
	int	nbr;

	l_base = checker(base);
	i = 0;
	nbr = 0;
	if (l_base > 0)
	{
		sign = get_sign(str, &i);
		helper = get_number(str[i], base);
		while (helper != -1)
		{
			nbr = (l_base * nbr) + helper;
			i++;
			helper = get_number(str[i], base);
		}
		return (sign * nbr);
	}
	return (0);
}
