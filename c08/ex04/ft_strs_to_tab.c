/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:34:09 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/01 16:57:39 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr_strings;

	i = 0;
	arr_strings = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr_strings)
		return (NULL);
	while (i < ac)
	{
		arr_strings[i].size = ft_strlen(av[i]);
		arr_strings[i].str = av[i];
		arr_strings[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr_strings[i].str = 0;
	return (arr_strings);
}
