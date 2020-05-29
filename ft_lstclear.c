/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:23:04 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/29 17:54:40 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tlst;

	if (!(tlst = *lst) || !lst)
		return ;
	if (del)
		while (*lst)
		{
			tlst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tlst;
		}
	*lst = NULL;
}
