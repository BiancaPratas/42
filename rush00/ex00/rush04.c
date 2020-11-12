/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:27:55 by flemos-d          #+#    #+#             */
/*   Updated: 2020/10/25 13:03:50 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_horizontal(int x, char left, char middle, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
		{
			ft_putchar(middle);
		}
		if (x == 0)
		{
			ft_putchar(right);
		}
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y, char wall)
{
	int i;

	while (y-- > 2)
	{
		ft_putchar(wall);
		i = 2;
		while (x > i++)
		{
			ft_putchar(' ');
		}
		if (x != 1)
		{
			ft_putchar(wall);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
	{
		print_horizontal(x, 'A', 'B', 'C');
		print_vertical(x, y, 'B');
	}
	if (y >= 2)
	{
		print_horizontal(x, 'C', 'B', 'A');
	}
}
