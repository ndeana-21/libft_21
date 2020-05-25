/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 14:37:31 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/24 05:18:26 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd(str[--i], fd);
	free(str);
}
