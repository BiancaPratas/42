/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:34:22 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/03 21:37:45 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			str[i + 1] = str[i + 1] + 32;
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
