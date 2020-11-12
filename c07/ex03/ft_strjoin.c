/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:28:42 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/12 14:53:55 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_totallen(int size, char **strs, char *sep)
{
	int i;
	int j;
	int k;
	int z;

	z = 0;
	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			z++;
		}
		i++;
	}
	while (sep[k] != '\0')
		k++;
	size = ((k * size) + z);
	return (size);
}

char	*ft_allstrscat(int size, char **strs, char *sep, char *all)
{
	int i;
	int j;
	int k;
	int l;

	i = -1;
	l = 0;
	while (++i < size)
	{
		j = 0;
		k = 0;
		while (strs[i][j] != '\0')
		{
			all[l] = strs[i][j];
			j++;
			l++;
		}
		if (i < size - 1)
			while (sep[k] != '\0')
			{
				all[l++] = sep[k++];
			}
	}
	return (all);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all;
	int		i;

	i = ft_totallen(size, strs, sep);
	all = malloc(i * sizeof(char) + 1);
	if (!(all = malloc(i * sizeof(char) + 1)))
		return (0);
	all = ft_allstrscat(size, strs, sep, all);
	all[i] = '\0';
	return (all);
}
