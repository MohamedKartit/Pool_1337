/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:33:35 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/03 18:44:45 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	l;

	l = 0;
	while (src[l])
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

void	ft_copier(int size, char **strs, char *sep, char **temp)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(*temp, strs[i]);
		*temp += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(*temp, sep);
			*temp += ft_strlen(sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*str;
	char	*temp;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len = len + (ft_strlen(sep) * (size - 1));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	temp = str;
	ft_copier(size, strs, sep, &temp);
	str[len] = '\0';
	return (str);
}
