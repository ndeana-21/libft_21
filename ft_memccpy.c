/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:26:01 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/24 05:18:40 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *to, const void *from, int c, size_t n)
{
	unsigned char	*buff_to;
	unsigned char	*buff_from;
	size_t			i;

	buff_to = (unsigned char*)to;
	buff_from = (unsigned char*)from;
	i = 0;
	while (i < n)
	{
		buff_to[i] = buff_from[i];
		if (buff_to[i] == (unsigned char)c)
			return ((void*)(to + i + 1));
		i++;
	}
	return (NULL);
}
