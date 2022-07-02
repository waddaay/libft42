/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:35:04 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/18 01:33:43 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	s;

	s = count * size;
	ptr = (void *)malloc(s);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, s);
	return (ptr);
}
