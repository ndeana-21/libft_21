/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:22:35 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/07 14:25:30 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list		*ft_lstnnext(t_list *lst, size_t n)
{
	if (!lst)
		return (0);
	while (n > 0 && lst->next)
	{
		lst = lst->next;
		n--;
	}
	return (lst);
}

t_dl_list	*ft_dl_lstlast(t_dl_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = (t_dl_list*)lst->next;
	return (lst);
}

t_dl_list	*ft_dl_lstfirst(t_dl_list *lst)
{
	if (!lst)
		return (0);
	while (lst->prev)
		lst = (t_dl_list*)lst->prev;
	return (lst);
}

t_dl_list	*ft_dl_lstnnext(t_dl_list *lst, size_t step)
{
	if (!lst)
		return (0);
	if (step > 0)
		while (step-- && lst->next)
			lst = (t_dl_list*)lst->next;
	else if (step < 0)
		while (step++ && lst->prev)
			lst = (t_dl_list*)lst->prev;
	return (lst);
}
