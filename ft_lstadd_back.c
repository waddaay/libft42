/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 23:00:56 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/21 02:53:43 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*temp;

	temp = *lst;
	if (temp)
	{
		last = ft_lstlast(temp);
		last->next = new;
	}
	else
		*lst = new;
}
