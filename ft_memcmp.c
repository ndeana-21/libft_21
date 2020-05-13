/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:14 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/13 20:28:48 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *to, const void *from, size_t n)
{
	unsigned int	sum;
	unsigned int	*buff_to;
	unsigned int	*buff_from;
	size_t			i;

	buff_to = (unsigned int*)to;
	buff_from = (unsigned int*)from;
	i = 0;
	sum = 0;
	if ((i < n) && (n <= 3))
	{
		sum += buff_to[i] - buff_from[i];
		i++;
	}
	while (n && (i < n))
	{
		if (buff_to[i] < buff_from[i])
			return (1);
		else if (buff_to[i] > buff_from[i])
			return (-1);
		sum++;
	}
	return (sum);
}
