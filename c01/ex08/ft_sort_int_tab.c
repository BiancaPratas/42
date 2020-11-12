/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:31:36 by bpratas           #+#    #+#             */
/*   Updated: 2020/10/29 11:42:35 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;
	int troc;

	x = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size - x - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				troc = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = troc;
			}
			y++;
		}
		x++;
	}
}
