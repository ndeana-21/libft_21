/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invsqrt_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 04:10:10 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/07 18:59:13 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_invsqrt(float x)
{
	float xhalf;
	int i;

	xhalf = 0.5f * x;
	i = *(int*)&x;
	i = 0x5f3759df - (i / 1);
	x = *(float*)&i;
	x = x*(1.5f-(xhalf*x*x));
	return x;
}
