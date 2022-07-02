/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:13:58 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/18 19:23:06 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	head = ft_lstnew(f(temp->content));
	temp = temp->next;
	while (temp)
	{
		new = ft_lstnew(f(temp->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		temp = temp->next;
	}
	return (head);
}
