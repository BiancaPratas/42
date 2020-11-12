/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:57:29 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/10 23:17:52 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *hold;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min - 1;
	hold = malloc(size * sizeof(int));
	if (hold == NULL)
		return (0);
	while (i <= size)
	{
		hold[i] = min + i;
		i++;
	}
	*range = hold;
	return (i);
}
