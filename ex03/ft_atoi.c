/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pware <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:12:14 by pware             #+#    #+#             */
/*   Updated: 2021/02/23 15:53:58 by pware            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int	a;
	int	minus;
	int	num;

	minus = 1;
	num = 0;
	a = 0;
	while (str[a] == ' ')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			minus = minus * (-1);
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = (num * 10) + (str[a] - '0');
		a++;
	}
	num = num * minus;
	return (num);
}
