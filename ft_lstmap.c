/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:23:23 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/27 00:03:25 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tlst;
	t_list	*first_tlst;

	if (!lst || !f || !del)
		return (NULL);
	if (!(tlst = ft_lstnew(f(lst->content))))
		return (NULL);
	first_tlst = tlst;
	while (lst)
	{
		if (lst->next)
		{
			if (!(tlst->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&first_tlst, del);
				return (NULL);
			}
			tlst = tlst->next;
		}
		lst = lst->next;
	}
	tlst->next = NULL;
	free(tlst);
	return (first_tlst);
}
