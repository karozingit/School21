/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pware <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:09:36 by pware             #+#    #+#             */
/*   Updated: 2021/02/25 17:21:18 by pware            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	arg;
	int	a;

	arg = argc - 1;
	while (arg > 0)
	{
		a = 0;
		while (argv[arg][a] != '\0')
		{
			ft_putchar(argv[arg][a]);
			a++;
		}
		a = 0;
		write(1, "\n", 1);
		arg--;
	}
	return (0);
}
