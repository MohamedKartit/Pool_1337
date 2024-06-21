/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:30:20 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/16 12:34:54 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	temp;
	int	last;

	n = 0;
	last = size - 1;
	while (n < size / 2)
	{
		temp = tab[n];
		tab[n] = tab[last];
		tab[last] = temp;
		n++;
		last--;
	}
}
