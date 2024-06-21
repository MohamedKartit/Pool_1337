/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:44:22 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/03 09:56:13 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	l;

	l = 0;
	while (s1[l] && s2[l] && s1[l] == s2[l])
		l++;
	return (s1[l] - s2[l]);
}
