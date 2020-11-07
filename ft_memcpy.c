/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:25:33 by ndeana            #+#    #+#             */
/*   Updated: 2020/10/14 12:38:03 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*buff_from;
	unsigned char	*buff_to;
	size_t			i;

	if (!to && !from)
		return (NULL);
	buff_from = (unsigned char*)from;
	buff_to = (unsigned char*)to;
	i = -1;
	while (++i < n)
	{
		if (buff_from[i])
			buff_to[i] = buff_from[i];
		else
			buff_to[i] = 0;
	}
	return (to);
}
