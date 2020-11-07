/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 01:22:04 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/06 18:30:42 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = NULL;
	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

char	**ft_lsttopage(t_list *lst, int *y)
{
	int		i;
	char	**dmas;

	if (!lst)
		return (NULL);
	*y = ft_lstsize(lst);
	if (!(dmas = (char **)ft_calloc(ft_lstsize(lst), sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < *y)
	{
		if (!(dmas[i++] = ft_strdup(lst->content)))
			return (NULL);
		lst = lst->next;
	}
	return (dmas);
}

t_dl_list	*ft_dl_lstnew(void *content)
{
	t_dl_list	*list;

	list = NULL;
	if (!(list = (t_dl_list*)malloc(sizeof(t_dl_list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}

char	**ft_dl_lsttopage(t_dl_list *lst, int *y)
{
	int		i;
	char	**dmas;

	if (!lst)
		return (NULL);
	*y = ft_dl_lstsize(lst);
	if (!(dmas = (char **)ft_calloc(ft_dl_lstsize(lst), sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < *y)
	{
		if (!(dmas[i++] = ft_strdup(lst->content)))
			return (NULL);
		lst = (t_dl_list*)lst->next;
	}
	return (dmas);
}
