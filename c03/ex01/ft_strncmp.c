/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:41:24 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/19 16:08:53 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while ((s1[len] != '\0' || s2[len] != '\0') && len < n)
	{
		if (s1[len] > s2[len])
			return (1);
		else if (s1[len] < s2[len])
			return (-1);
		len++;
	}
	return (0);
}
