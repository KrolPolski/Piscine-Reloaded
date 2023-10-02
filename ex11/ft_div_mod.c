/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:11:00 by rboudwin          #+#    #+#             */
/*   Updated: 2023/10/02 12:11:01 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	result;
	int	*div;
	int	remainder;
	int	*mod;

	div = &result;
	mod = &remainder;
	a = 10;
	b = 3;
	ft_div_mod(a, b, div, mod);
	printf("%d divided by %d is %d with a remainder of %d", a, b, result, remainder);
}*/
