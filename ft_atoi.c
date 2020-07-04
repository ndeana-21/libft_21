/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 21:56:49 by ndeana            #+#    #+#             */
/*   Updated: 2020/07/04 01:20:06 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int	ft_atoi(char *s)
{
	unsigned long	rez;
	int				sign;

	while ((*s >= '\t' && *s <= '\r') || *s == ' ')
		s++;
	sign = 1;
	if (*s == '-')
		sign = -1;
	if (*s == '+' || *s == '-')
		s++;
	rez = 0;
	while (*s >= '0' && *s <= '9')
	{
		rez = rez * 10 + (*s - '0');
		s++;
		if (rez > LONG_MAX)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
	}
	return (rez * sign);
}
