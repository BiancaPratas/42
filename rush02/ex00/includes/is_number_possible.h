/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number_possible.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:48:44 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 07:21:01 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_NUMBER_POSSIBLE_H
# define IS_NUMBER_POSSIBLE_H

# include "./../includes/libft.h"
# include <unistd.h>
int		is_number_possible(char *number, t_number *dict);
int		highest_length(t_number *dict);

#endif
