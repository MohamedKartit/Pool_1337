/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:06:54 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/02 21:22:52 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	size = max - min;
	if (size < 1)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (size + 1));
	if (!arr)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	*range = arr;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (size);
}
