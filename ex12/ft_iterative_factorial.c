/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryanb <ryanb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:30:07 by ryanb             #+#    #+#             */
/*   Updated: 2023/10/02 12:37:31 by ryanb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	running_total;

	i = 0;
	running_total = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (i < nb)
	{
		i++;
		running_total *= i;
	}
	return (running_total);
}/*
#include <stdio.h>

int main(void)
{
    int nb;
    int result;
    
    nb = 12; 
    result = ft_iterative_factorial(nb);
    printf("%d! = %d \n", nb, result);
}*/
