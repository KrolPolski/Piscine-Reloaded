/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:34:00 by rboudwin          #+#    #+#             */
/*   Updated: 2023/10/02 10:34:01 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	a = &x;
	b = &y;
	x = 1;
	y = 2;
	printf("X is %d and y is %d", x, y);
	ft_swap(a, b);
	printf("X is now %d and y is %d", x, y);
}*/
