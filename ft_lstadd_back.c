/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:22:42 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/25 09:53:43 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tlst;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		tlst = *lst;
		while (tlst->next)
			tlst = tlst->next;
		tlst->next = new;
	}
}
