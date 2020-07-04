/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bittodex_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:34:51 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/30 03:24:43 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

unsigned long long	ft_bit_to_dex(size_t bit)
{
	unsigned long long dex;

	dex = 1;
	if (bit >= 64)
		return (ULLONG_MAX);
	while (bit-- > 0)
		dex *= 2;
	return (dex - 1);
}