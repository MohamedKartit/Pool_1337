/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:55:37 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/17 14:55:50 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		if (str[l] >= 'A' && str[l] <= 'Z')
			str[l] = str[l] + 32;
		l++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	len;
	int	changer;

	len = 0;
	changer = 1;
	str = ft_strlowcase(str);
	while (str[len])
	{
		if (str[len] >= 'a' && str[len] <= 'z')
		{
			if (changer == 1)
				str[len] -= 32;
			changer = 0;
		}
		else if (str[len] >= '0' && str[len] <= '9')
			changer = 0;
		else
			changer = 1;
		len++;
	}
	return (str);
}
