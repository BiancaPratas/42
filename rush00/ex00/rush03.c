/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:03:54 by bpratas           #+#    #+#             */
/*   Updated: 2020/10/25 14:04:38 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	function(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == y))
	{
		ft_putchar('A');
	}
	else if ((i == x && j == 1) || (i == x && j == y))
	{
		ft_putchar('C');
	}
	else if ((i == 1) || (i == x) || (j == 1) || (j == y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			function(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
