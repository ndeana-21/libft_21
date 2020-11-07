/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:17:37 by ndeana            #+#    #+#             */
/*   Updated: 2020/10/05 23:55:43 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	if (c == '\0')
		return ((char*)s);
	return (0);
}

int		ft_strsample(const char *str, const char *sample)
{
	int		i;
	int		j;

	if (!str || !sample)
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (sample[j])
		{
			if (sample[j] == str[i])
				break ;
			j++;
		}
		if (!sample[j])
			return (0);
		i++;
	}
	return (1);
}
