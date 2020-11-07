/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:23:48 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/04 10:26:13 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strmatch(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (ft_strmatch(s1, s2 + 1) || ft_strmatch(s1 + 1, s2));
	else if (!(*s1) && *s2 == '*')
		return (ft_strmatch(s1, s2 + 1));
	else if (*s1 && *s2 && (*s1 == *s2))
		return (ft_strmatch(s1 + 1, s2 + 1));
	else if (!(*s1) && !(*s2))
		return (1);
	return (0);
}
