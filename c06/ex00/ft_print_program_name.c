/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:31:48 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/27 21:29:16 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puts(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		write(1, &str[l++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_puts(argv[0]);
	return (0);
}
