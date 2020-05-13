/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:23:11 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/08 01:10:02 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buff;
	size_t			i;

	buff = (unsigned char*)s;
	n = 0;
	while (i < n)
	{
		buff[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
