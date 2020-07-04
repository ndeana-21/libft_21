/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 03:58:02 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/30 02:04:22 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_pow(int x, int degree)
{
	long int	rez;

	rez = (long)x;
	while (--degree)
	{
		rez *= x;
		if (rez >= INT_MAX)
			return (INT_MAX);
		if (rez <= INT_MIN)
			return (INT_MIN);
	}
	return ((int)rez);
}
