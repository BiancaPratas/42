/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_nb_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:53:02 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/08 10:22:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/is_nb_valid.h"

int		is_nb_valid(char *number)
{
	while (*number != '\0')
	{
		if (*number >= '0' && *number <= '9')
			number++;
		else
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}
	}
	return (1);
}
