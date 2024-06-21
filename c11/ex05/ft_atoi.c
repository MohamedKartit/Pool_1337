/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:11:28 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/05 20:47:55 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	l;
	int	number;
	int	sign;

	l = 0;
	sign = 1;
	number = 0;
	while ((str[l] >= 9 && str[l] <= 13) || str[l] == ' ')
		l++;
	while ((str[l] == '-' || str[l] == '+'))
	{
		if (str[l] == '-')
			sign *= -1;
		l++;
	}
	while (str[l] >= '0' && str[l] <= '9' && str[l])
	{
		number = number * 10 + (str[l] - 48);
		l++;
	}
	return (sign * number);
}
