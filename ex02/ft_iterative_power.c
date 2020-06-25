/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:11:52 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/25 16:38:53 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int x;
	x = 1;

	for (int i =0; i < power; x++)
		x = x * nb ;
	return x;
}

int main() 
{ int nb = -5;
	int power = 10;

	printf("x(%d;%d) = %d", nb,power, ft_iterative_power (nb, power));
	return 0;
}
