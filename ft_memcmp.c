/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:14 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/29 17:35:35 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *to, const void *from, size_t n)
{
	unsigned char	*buff_to;
	unsigned char	*buff_from;
	size_t			i;

	if (!n)
		return (0);
	buff_to = (unsigned char*)to;
	buff_from = (unsigned char*)from;
	i = 0;
	while (buff_to[i] == buff_from[i] && (i < n - 1))
		i++;
	return (buff_to[i] - buff_from[i]);
}
