/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:23:53 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/26 11:46:33 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_recursive_power(int nb, int power)
	{
		if (power < 0)
			return (0);
		if (power == 0)
			return (1);
		else if (power == 1)
			return (nb);
		else
		return (nb * ft_recursive_power(nb , power -1));
				}

