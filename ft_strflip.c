/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strflip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 00:05:55 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/20 00:06:01 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_strflip(char *s)
{
	unsigned int	i;
	unsigned int	j;

	if (!*s)
		return ;
	i = 0;
	j = ft_strlen(s);
	while (i < --j)
	{
		s[i] = s[j];
		i++;
	}
}
