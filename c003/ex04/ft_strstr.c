/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:01:13 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/04 17:36:06 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int o;
	int i;
	int j;

	o = 0;
	while (to_find[o])
	{
		o++;
	}
	if (o == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j + 1 == o)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
