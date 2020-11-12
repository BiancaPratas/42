/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:28:30 by bpratas           #+#    #+#             */
/*   Updated: 2020/11/04 17:43:27 by bpratas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *stt;

	stt = dest;
	while (*stt != '\0')
	{
		stt++;
	}
	while (*src != '\0' && nb > 0)
	{
		*stt = *src;
		stt++;
		src++;
		nb--;
	}
	*stt = '\0';
	return (dest);
}
