/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:43:03 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/27 12:52:13 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\r' || c == '\f');
}

int	ft_atoi(char *str)
{
	int	len;
	int	sign;
	int	number;

	len = 0;
	sign = 1;
	number = 0;
	while (is_space(str[len]))
		len++;
	while (str[len] == '+' || str[len] == '-')
	{
		if (str[len] == '-')
			sign *= -1;
		len++;
	}
	while (str[len] >= '0' && str[len] <= '9')
	{
		number = number * 10 + (str[len] - 48);
		len++;
	}
	return (number * sign);
}
