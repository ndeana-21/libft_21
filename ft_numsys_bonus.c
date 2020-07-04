/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numsys_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 17:06:12 by ndeana            #+#    #+#             */
/*   Updated: 2020/06/30 17:39:35 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sys_dex(unsigned long long int num, unsigned int dex)
{
	size_t	i;

	if (!dex)
		return (0);
	if (!num)
		return (1);
	i = 0;
	while (num)
	{
		num /= dex;
		i++;
	}
	return (i);
}

char	*ft_dex_to_numsys(unsigned long long int num, unsigned int dex, size_t sizeof_type)
{
	unsigned long long	maxlen_type;
	char				*numsys;
	char				*alphabet;
	size_t				i;

	maxlen_type = ft_bit_to_dex(8 * sizeof_type);
	if (maxlen_type)
		if (num > maxlen_type)
			num %= num / maxlen_type;
	if (2 > dex || dex > 36)
		return (NULL);
	if (!(numsys = malloc(sizeof(char) * (ft_sys_dex(num, dex)) + 1)))
		return (NULL);
	alphabet = "0123456789abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (num || !i)
	{
		numsys[i++] = alphabet[num % dex];
		num /= dex;
	}
	numsys[i] = '\0';
	ft_strrev(numsys);
	return (numsys);
}
