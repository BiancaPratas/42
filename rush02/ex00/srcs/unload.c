/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unload.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 07:12:12 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 11:36:08 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/unload.h"

void		unload(t_number *dict)
{
	while (dict->number != 0)
	{
		free(dict->number);
		free(dict->letters);
		dict++;
	}
	free(dict->number);
	free(dict->letters);
	free(dict);
	return ;
}
