/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:51:42 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/03 16:13:42 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	string_number(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_separator(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	len_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_words(char *str, char *charset)
{
	int		psr_len;
	int		i;
	char	*word;

	psr_len = len_sep(str, charset);
	i = 0;
	word = (char *)malloc(sizeof(char) * (psr_len + 1));
	while (i < psr_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;
	int		str_number;

	i = 0;
	str_number = string_number(str, charset);
	strings = (char **)malloc(sizeof(char *) * (str_number + 1));
	while (*str)
	{
		while (*str && check_separator(*str, charset))
			str++;
		if (*str)
		{
			strings[i] = ft_words(str, charset);
			i++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
