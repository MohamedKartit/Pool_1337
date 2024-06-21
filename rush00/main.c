/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkartit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:16:18 by mkartit           #+#    #+#             */
/*   Updated: 2023/09/18 09:13:11 by sbourziq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		stoin(char *str);
void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = stoin(argv[1]);
		y = stoin(argv[2]);
		rush(x, y);
	}
	else
	{
		rush (0, 0);
	}
	return (0);
}
