/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 23:45:42 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/09 23:59:31 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long double	ft_min(long double *x, size_t len)
{
	long double	tmp;
	while (len)
	{
		if (*x < tmp)
			tmp = *x;
		x++;
		len--;
	}
	return (tmp);
}

long double	ft_max(long double *x, size_t len)
{
	long double	tmp;

	while (len)
	{
		if (*x > tmp)
			tmp = *x;
		len--;
		x++;
	}
	return (tmp);
}
