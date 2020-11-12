/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:54:16 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/10 23:18:26 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	range;
	int i;
	int *hold;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min - 1;
	hold = malloc(range * sizeof(int));
	if (hold == NULL)
		return (0);
	while (i <= range)
	{
		hold[i] = min + i;
		i++;
	}
	return (hold);
}
