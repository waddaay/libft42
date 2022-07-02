/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:44:05 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/18 19:09:01 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	i = 0;
	size = size - j;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i + j] = src[i];
			i++;
		}
		dst[i + j] = '\0';
	}
	return (j + len((char *)src));
}
