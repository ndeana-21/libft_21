/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:22:50 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/04 15:27:38 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del && lst)
		del(lst->content);
	else
		return (lst);
	free(lst);
	return (NULL);
}

t_dl_list	*ft_dl_lstdelone(t_dl_list *lst, void (*del)(void*))
{
	if (del && lst)
		del(lst->content);
	else
		return (lst);
	free(lst);
	return (NULL);
}
