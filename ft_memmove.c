/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:35:23 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/26 01:25:16 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	const unsigned char	*buff_from;
	unsigned char		*buff_to;

	buff_from = (unsigned char*)from;
	buff_to = (unsigned char*)to;
	if (!buff_to && !buff_from)
		return (NULL);
	if (buff_from < buff_to)
		return (ft_memcpy(buff_to, buff_from, n));
	else
		while (--n)
			buff_to[n - 1] = buff_from[n - 1];
	return (buff_to);
}
