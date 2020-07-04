/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 22:59:29 by ndeana            #+#    #+#             */
/*   Updated: 2020/07/04 00:49:51 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static size_t	count_lenofnum(long long int num)
{
	if (num == LLONG_MIN)
		return (11);
	else if (num < 0)
		return (count_lenofnum(num * -1) + 1);
	else if (num >= 10)
		return (count_lenofnum(num / 10) + 1);
	else
		return (1);
}

char			*ft_llitoa(long long int n)
{
	char			*num;
	unsigned int	sign;
	unsigned int	i;
	unsigned int	ui_n;

	if (!(num = (char *)malloc(sizeof(char) * count_lenofnum(n) + 1)))
		return (NULL);
	sign = 0;
	i = 0;
	if (n < 0)
	{
		num[i++] = '-';
		sign++;
		ui_n = (unsigned int)(n * -1);
	}
	else
		ui_n = (unsigned int)n;
	while (ui_n != 0 || !*num)
	{
		num[i++] = (ui_n % 10) + '0';
		ui_n /= 10;
	}
	num[i] = '\0';
	ft_strrev(&num[sign]);
	return (num);
}
