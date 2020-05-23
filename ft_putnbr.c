/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 00:06:58 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/20 00:07:13 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr(int n)
{
	char	*str;
	size_t	i;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (!(str = (char*)malloc(sizeof(char) * 11)))
		return ;
	i = 0;
	str[0] = '0';
	while (n)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	while (i)
		ft_putchar(str[--i]);
	free(str);
}
