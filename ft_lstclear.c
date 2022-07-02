/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:15:17 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/17 22:07:31 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (!*lst)
		return ;
	temp = *lst;
	while (temp)
	{
		temp2 = temp->next;
		del(temp->content);
		free(temp);
		temp = temp2;
	}
	*lst = NULL;
}
