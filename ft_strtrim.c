/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 18:50:40 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/24 05:34:06 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	trimed(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	size_t			left;
	size_t			size;
	size_t			right;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	left = 0;
	while (s1[left] && trimed(s1[left], set))
		left++;
	if (left == ft_strlen(s1))
		return (ft_strdup(""));
	size = ft_strlen(s1) - left;
	right = ft_strlen(s1);
	while (trimed(s1[--right], set))
		size--;
	if (!(trim = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_strlcpy(trim, &s1[left], size);
	return (trim);
}
