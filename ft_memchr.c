/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:47:33 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/05 13:41:19 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	s = (unsigned char *)str;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == ch)
			return (s + i);
		i++;
	}
	return (0);
}
