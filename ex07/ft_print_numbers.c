/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:14:00 by rboudwin          #+#    #+#             */
/*   Updated: 2023/09/23 14:14:01 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;
	char	c;

	i = 0;
	c = '0';
	while (i < 10)
	{
		ft_putchar(c);
		i++;
		c++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_numbers();
}
