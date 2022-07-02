/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:43:21 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/02 20:11:04 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	a;

	i = 0;
	str = (unsigned char *)b;
	a = (unsigned char)c;
	while (i < len)
	{
		str[i] = a;
		i++;
	}
	return (b);
}
