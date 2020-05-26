/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:29 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/26 23:48:34 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t n)
{
	size_t	size_from;
	size_t	size_to;
	size_t	i;

	size_to = ft_strlen(to);
	size_from = ft_strlen(from);
	if (size_to >= n)
		return (size_from + n);
	i = 0;
	while (((n - 1) > (i + size_to)) && from[i])
	{
		to[i + size_to] = from[i];
		i++;
	}
	to[i + size_to] = '\0';
	return (size_from + size_to);
}
