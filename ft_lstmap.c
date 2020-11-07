/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:23:23 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/06 18:33:34 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_next;

	if (!lst || !f)
		return (NULL);
	if (!(new_next = ft_lstnew(f(lst->content))))
		return (NULL);
	new_lst = new_next;
	lst = lst->next;
	while (lst)
	{
		if (!(new_next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_next);
	}
	return (new_lst);
}

t_dl_list	*ft_dl_lstmap(t_dl_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_dl_list	*new_lst;
	t_dl_list	*new_next;

	if (!lst || !f)
		return (NULL);
	if (!(new_next = ft_dl_lstnew(f(lst->content))))
		return (NULL);
	new_lst = new_next;
	lst = (t_dl_list*)lst->next;
	while (lst)
	{
		if (!(new_next = ft_dl_lstnew(f(lst->content))))
		{
			ft_dl_lstclear(new_lst, del);
			break ;
		}
		lst = (t_dl_list*)lst->next;
		ft_dl_lstadd_back(&new_lst, new_next);
	}
	return (new_lst);
}
