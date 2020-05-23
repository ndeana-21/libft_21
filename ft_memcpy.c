/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:25:33 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/19 23:23:59 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*buff_from;
	unsigned char	*buff_to;
	size_t			i;

	buff_from = (unsigned char*)from;
	buff_to = (unsigned char*)to;
	i = 0;
	while (i < n)
	{
		buff_to[i] = buff_from[i];
		i++;
	}
	return (to);
}
