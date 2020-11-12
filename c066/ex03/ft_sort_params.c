/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:06:03 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/09 15:08:40 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_sort(char *tab[], int size)
{
	int		i;
	char	*troc;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			troc = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = troc;
			i = 0;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc < 2)
		return (0);
	ft_sort(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
