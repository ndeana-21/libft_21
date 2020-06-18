/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 03:58:02 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/04 04:20:28 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int x, int y)
{
	long int	rez;

	rez = (long)x;
	while (--y)
	{
		rez *= x;
		if (rez >= INT_MAX)
			return (INT_MAX);
		if (rez <= INT_MIN)
			return (INT_MIN);
	}
	return ((int)rez);
}
