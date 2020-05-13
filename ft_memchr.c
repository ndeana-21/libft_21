/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:36:00 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/08 03:38:07 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*buff_arr;
	size_t			i;

	buff_arr = (unsigned char*)arr;
	while (i < n)
	{
		if (buff_arr[i] == (unsigned char)c)
			return (arr + i + 1);
		i++;
	}
	return (NULL);
}
