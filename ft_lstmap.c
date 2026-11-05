/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amcocoua <amcocoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:00:13 by amcocoua          #+#    #+#             */
/*   Updated: 2026/11/05 14:17:42 by amcocoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	new = malloc(sizeof(t_list) * 1);
	if (!new)
		return (NULL);
	new->content = f(lst->content);
	new->next = NULL;
	first = malloc(sizeof(t_list) * 1);
	if (!first)
		return (NULL);
	first = new;
	lst = lst->next;
	new = new->next;
	while (lst->next != NULL)
	{
		new->content = f(lst->content);
		lst = lst->next;
		new = new->next;
	}
	new->next = NULL;
	new = first;
	del(first);
	return (new);
}
