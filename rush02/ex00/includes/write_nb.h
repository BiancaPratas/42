/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_nb.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:01:25 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 10:38:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_NB_H
# define WRITE_NB_H

void			write_nb(char *number, t_number *dict);
void			case_hundreds(char number,
								t_number *dict, 
								int *has_numbers_before);
void			case_tens(char *number,
							t_number *dict, 
							int *has_numbers_before);
void			case_ones(char number,
							int nb_len,
							t_number *dict, 
							int *has_numbers_before);

#include <unistd.h>
#include "./../includes/libft.h"
#include "./../includes/write_nb2.h"

#endif
