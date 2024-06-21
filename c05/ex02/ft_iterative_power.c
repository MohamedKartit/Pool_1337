/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:23:25 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/27 15:31:24 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	sum;

	i = 0;
	sum = 1;
	if (power < 0)
		return (0);
	while (power > i)
	{
		sum *= nb;
		i++;
	}
	return (sum);
}
