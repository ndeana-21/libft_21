/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 18:50:19 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/25 10:45:06 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strflip(char *s)
{
	unsigned int	i;
	unsigned int	j;

	if (!*s)
		return ;
	i = 0;
	j = ft_strlen(s);
	while (i < --j)
	{
		s[i] = s[j];
		i++;
	}
}

char	*ft_itoa(int n)
{
	char			*num;
	unsigned int	i;
	unsigned int	j;

	if (!(num = (char *)malloc(sizeof(char) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	if (n < 0)
	{
		num[i] = '-';
		i++;
		j++;
		n = -1;
	}
	while (n)
	{
		num[j] = (n % 10) + '0';
		n /= 10;
		j++;
	}
	num[i] = '\0';
	ft_strflip(&num[i]);
	return (num);
}
