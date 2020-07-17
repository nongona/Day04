/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:59:28 by nongona           #+#    #+#             */
/*   Updated: 2020/07/17 10:18:48 by nongona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 
int ft_recursive_factorial(int nb)
{
	int result;
	result =1;

	if (nb < 0)
	return (0);

		while (nb >= 1)
	{
		result = result * nb-1;
		nb--;
	}
	return (result);
}

