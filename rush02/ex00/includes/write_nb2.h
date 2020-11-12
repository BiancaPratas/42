/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_nb2.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:59:22 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/07 19:39:41 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_NB2_H
# define WRITE_NB2_H

void			find_ones(char number, t_number *dict);
void			find_tens(char *number, t_number *dict);
void			find_hundreds(int len, t_number *dict);
int				check_format(char *number);

#endif
