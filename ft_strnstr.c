/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:55 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/28 09:13:25 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t n)
{
	size_t	i_find;
	size_t	i_s;

	if (!*find)
		return ((char*)s);
	i_s = 0;
	while (s[i_s] && i_s < n)
	{
		i_find = 0;
		while (find[i_find] && (find[i_find] == s[i_s + i_find]) &&
				((i_s + i_find) < n))
			i_find++;
		if (!find[i_find])
			return ((char*)&s[i_s]);
		i_s++;
	}
	return (0);
}
