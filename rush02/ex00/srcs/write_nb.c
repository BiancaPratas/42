/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 08:15:48 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 11:02:44 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/write_nb.h"

void	write_nb(char *number, t_number *dict)
{
	int	nb_len;
	int has_numbers_before;

	nb_len = ft_strlen(number);
	has_numbers_before = 0;
	while (*number)
	{
		if (*number == '0' && has_numbers_before)
			;
		else if (nb_len % 3 == 0)
			case_hundreds(*number, dict, &has_numbers_before);
		else if (nb_len % 3 == 1)
			case_ones(*number, nb_len, dict, &has_numbers_before);
		else
		{
			case_tens(number, dict, &has_numbers_before);
			if (*(number + 1) == '0' ||
				(*number == '1' && *(number + 1) != '0'))
				number++;
		}
		number++;
		nb_len--;
	}
	write(1, "\n", 1);
}

void	case_hundreds(char number,
					t_number *dict,
					int *has_numbers_before)
{
	if (*has_numbers_before)
		write(1, " ", 1);
	*has_numbers_before = 1;
	find_ones(number, dict);
	write(1, " ", 1);
	find_hundreds(3, dict);
}

void	case_tens(char *number,
					t_number *dict,
					int *has_numbers_before)
{
	if (*has_numbers_before)
		write(1, " ", 1);
	*has_numbers_before = 1;
	find_tens(number, dict);
}

void	case_ones(char number,
					int nb_len,
					t_number *dict,
					int *has_numbers_before)
{
	if (*has_numbers_before)
		write(1, " ", 1);
	*has_numbers_before = 1;
	find_ones(number, dict);
	if (nb_len > 1)
		write(1, " ", 1);
	find_hundreds(nb_len, dict);
}
