/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:35:06 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/19 16:57:47 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strdup(const char *s)
{
	char	*dub;
	size_t	size;
	size_t	i;

	size = 0;
	while (s[size])
		size++;
	if (!(dub = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		dub[i] = s[i];
		i++;
	}
	dub[i] = '\0';
	return (dub);
}
