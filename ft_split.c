/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 18:50:30 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/22 16:43:44 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	count_words(char const *s, char c)
{
	unsigned int	i;
	size_t			count;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c))
			count++;
		i++;
	}
	return (count);
}

char	*putalloc_word(char const *s, unsigned int i, size_t l, char c)
{
	char			*word;
	unsigned int	j;

	if (!(word = (char *)malloc(sizeof(char) + l)))
		return (NULL);
	j = 0;
	while (s[i] && s[i] != c)
	{
		word[j] = s[i];
		i++;
		j++;
	}
	word[j] = 0;
	return (word);
}

char	**alloc_splstr(char const *s, char c)
{
	char			**spl;
	unsigned int	i;
	size_t			w;
	size_t			l;

	if (!s || !(spl = (char **)malloc(sizeof(char *) * count_words(s, c) + 1)))
		return (NULL);
	i = 0;
	w = 0;
	while (s[i])
	{
		l = 0;
		while (s[i + l] && s[i + l] != c)
			l++;
		if (!(spl[w] = putalloc_word(s, i, l, c)))
			return (NULL);
		while (s[i + l] && s[i + l] == c)
			i++;
		i += l;
		w++;
	}
	spl[w] = 0;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char			**spl;

	if (!(spl = alloc_splstr(s, c)))
		return (NULL);
	return (spl);
}
