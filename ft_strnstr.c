/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:55 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/14 00:32:29 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s, const char *find, size_t n)
{
	unsigned int	i_find;
	unsigned int	i_s;

	if (!*s)
		return ((char*)s);
	i_s = 0;
	while (s[i_s] && (size_t)i_s < n)
	{
		if (s[i_s] == find[0])
		{
			i_find = 1;
			while (find[i_find] && (find[i_find] == s[i_s + i_find]) &&
					((size_t)(i_s + i_find) < n))
				i_find++;
			if (!find[i_find])
				return ((char*)&s[i_s]);
		}
		i_s++;
	}
	return (0);
}
