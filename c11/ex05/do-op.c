/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:57:36 by mkartit           #+#    #+#             */
/*   Updated: 2023/10/06 07:32:35 by mkartit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <stdio.h>
#include <unistd.h>

int	do_math(int op1, char *sign, int op2)
{
	int	result;

	result = 1;
	if (sign[0] == '-')
		result = sub(op1, op2);
	else if (sign[0] == '+')
		result = sum(op1, op2);
	else if (sign[0] == '*')
		result = mul(op1, op2);
	else if (sign[0] == '/')
		result = div(op1, op2);
	else if (sign[0] == '%')
		result = mod(op1, op2);
	return (result);
}

void	do_op(char *s1, char *s, char *s2)
{
	int	op1;
	int	op2;
	int	result;

	result = 1;
	op1 = ft_atoi(s1);
	op2 = ft_atoi(s2);
	if (!(s[0] == '-' || s[0] == '+' || s[0] == '/'
			|| s[0] == '*' || s[0] == '%'))
		write(1, "0", 1);
	else if (s[0] == '/' && op2 == 0)
		write(1, "Stop : division by zero", 23);
	else if (s[0] == '%' && op2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		result = result * do_math(op1, s, op2);
		ft_putnbr(result);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
