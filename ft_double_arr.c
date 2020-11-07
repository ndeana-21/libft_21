/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:03:42 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/03 05:35:17 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_free_da(void **double_arr, size_t hight)
{
	size_t i;

	i = 0;
	while (i < hight)
	{
		free(double_arr[i]);
		double_arr[i] = NULL;
		i++;
	}
	free((void*)double_arr);
	double_arr = NULL;
}

void			**ft_make_da(size_t size, size_t wide, size_t hight)
{
	size_t	i;
	void	**double_arr;

	double_arr = NULL;
	if (!(double_arr = (void **)ft_calloc(hight, sizeof(void *))))
		return (NULL);
	i = -1;
	while (++i < hight)
	{
		if (!(double_arr[i] = ft_calloc(wide, size)))
		{
			ft_free_da(double_arr, i);
			return (NULL);
		}
		ft_bzero(double_arr[i], size * wide);
	}
	return (double_arr);
}
