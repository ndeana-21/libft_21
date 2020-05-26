/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:24 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/26 02:10:08 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *to, const char *from, size_t n)
{
	size_t	size;
	size_t	i;

	if (!to)
		return (0);
	size = ft_strlen(from);
	if (!n)
		return (size);
	i = 0;
	while ((i < n - 1) && from[i])
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
	return (size);
}
