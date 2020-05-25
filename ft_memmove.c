/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:35:23 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/24 05:18:32 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	const unsigned char	*buff_from;
	unsigned char		*buff_to;
	size_t				i;

	buff_from = (unsigned char*)from;
	buff_to = (unsigned char*)to;
	i = 0;
	if (buff_from < buff_to)
		while (i <= n)
		{
			buff_to[n - i] = buff_from[n - i];
			i++;
		}
	else
		while (i < n)
		{
			buff_to[i] = buff_from[i];
			i++;
		}
	return (to);
}
