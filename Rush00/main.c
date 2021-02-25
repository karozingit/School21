/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pware <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:24:40 by pware             #+#    #+#             */
/*   Updated: 2021/02/21 13:09:46 by pware            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush01 (int a, int b)
{
	int c;

	while (a = 5, b = 3)
	{
		ft_putchar('/');
		ft_putchar('*');
		ft_putchar('*');
		ft_putchar('*');
		ft_putchar('\\');
break ;
	}

}
	
int		main()
{
	rush01(5, 3);
	return (0);
}


