/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 18:57:39 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/10 00:40:06 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_sqrt(float x)
{
	float	rez;
	float	step;
	float	powbuf;

	rez = x;
	step = x / 2;
	while ((powbuf = ft_pow(rez, 2)) != x)
	{
		if (powbuf > x)
			rez -= step;
		else if (powbuf < x)
			rez += step;
		step /= 2;
	}
	return (rez);
}