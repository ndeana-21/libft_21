/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:35:23 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/29 17:34:41 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	const unsigned char	*buff_from;
	unsigned char		*buff_to;

	buff_from = (unsigned char*)from;
	buff_to = (unsigned char*)to;
	if (from > to)
		return (ft_memcpy(buff_to, buff_from, n));
	else if (from < to)
		while (n)
		{
			n--;
			buff_to[n] = buff_from[n];
		}
	return (to);
}
