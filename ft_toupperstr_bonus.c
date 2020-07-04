/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupperstr_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 02:40:38 by ndeana            #+#    #+#             */
/*   Updated: 2020/07/02 02:48:13 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupperstr(char *str)
{
	char	*newstr;
	size_t	i;

	if (!str)
		return (NULL);
	if (!(newstr = malloc(sizeof(char *) * ft_strlen(str) + 1)))
		return (NULL);
	i = 0;
	while (str[i])
		newstr[i] = ft_toupper(str[i]);
	newstr[i] = '\0';
	return (str);
}
