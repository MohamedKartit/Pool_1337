/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:03:10 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/04 16:44:32 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	l;
	int	capt;

	l = 0;
	capt = 1;
	while (l < length - 1 && capt)
	{
		if (f(tab[l], tab[l + 1]) < 0)
			capt = 0;
		l++;
	}
	if (capt == 0)
	{
		l = 0;
		while (l < length - 1)
		{
			if (f(tab[l], tab[l + 1]) > 0)
				return (0);
			l++;
		}
	}
	return (1);
}
