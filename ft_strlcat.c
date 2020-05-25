/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:29 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/24 05:18:14 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t n)
{
	size_t	i;

	while (*to)
		to++;
	i = 0;
	while ((i < n) && from[i])
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
	return (i);
}
