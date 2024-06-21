/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:16:49 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/04 16:42:15 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	l;
	int	*arr;

	arr = (int *)malloc(sizeof(int) * length);
	if (!arr)
		return (NULL);
	l = 0;
	while (l < length)
	{
		*(arr + l) = f(tab[l]);
		l++;
	}
	return (arr);
}
