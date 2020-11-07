/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:22:14 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/07 14:25:39 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_dl_lstadd_front(t_dl_list **lst, t_dl_list *new)
{
	t_dl_list	*tlst;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		tlst = ft_dl_lstfirst(*lst);
		new->next = (struct t_dl_list*)tlst;
		*lst = new;
	}
}
