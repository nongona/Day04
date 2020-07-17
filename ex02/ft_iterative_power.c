/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:22:02 by nongona           #+#    #+#             */
/*   Updated: 2020/07/17 10:16:57 by nongona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

	int ft_iterative_power(int nb, int power)
{
	int result;
	int p;
	
	result =1;
	p = 2;

	if (nb < 0)
	return (0);
		 
		while (nb >= 1)
		
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
