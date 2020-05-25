/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:23:04 by ndeana            #+#    #+#             */
/*   Updated: 2020/05/24 17:00:34 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tlst;
	t_list	*next;

	if (!(tlst = *lst) || !del)
		return ;
	while (tlst)
	{
		next = tlst->next;
		del(tlst->content);
		free(tlst);
		tlst = next;
	}
	*lst = NULL;
}
