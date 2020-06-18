/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:36:00 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/25 12:23:40 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*chr;
	size_t			i;

	chr = (unsigned char*)arr;
	i = 0;
	while (i < n)
	{
		if (chr[i] == (unsigned char)c)
			return ((void *)chr + i);
		i++;
	}
	return (NULL);
}
