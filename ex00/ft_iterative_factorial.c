/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:39:56 by nongona           #+#    #+#             */
/*   Updated: 2020/07/17 10:17:56 by nongona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	ft_iterative_factorial(int nb)
{
	int result;
	result =1;

	if (nb< 0)
	return (0);

		while (nb>= 1)
		{
			result = result * nb;
			nb--;
		}
		return (result);
}


