/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:45:40 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/25 10:45:24 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


// n! = n*(n-1)!
// n! = 1 if n=0 or n=1


int ft_recursive_factorial(int nb)
{

	
	if (nb >= 1)

	return nb * ft_recursive_factorial(nb -1);

	if (nb == 0)
		return 1;
	return 0;

	
}


