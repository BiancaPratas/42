/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dict_valid.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 07:18:32 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/08 09:52:33 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_DICT_VALID_H
# define IS_DICT_VALID_H

# define LINE_MAX 1025
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h> 
# include "./../includes/libft.h"
# define DICT "numbers.dict"

int		is_dict_valid(char *file);
int		is_empty(char *line);
int		is_pattern(char *line);
int		ft_str_is_printable(char *str);

#endif
