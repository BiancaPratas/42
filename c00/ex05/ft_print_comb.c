/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:42:50 by bpratas           #+#    #+#             */
/*   Updated: 2020/10/27 12:14:49 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cond(char a, char b, char c)
{
	if (a != b && a != c && b != c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	if (a == '7' && b == '8' && c == '9')
		;
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				cond(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
