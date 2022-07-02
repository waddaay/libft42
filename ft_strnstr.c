/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:20:01 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/18 20:55:22 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*save;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			j = 1;
			while (haystack[i + j] == needle[j] && needle[j] != '\0'
				&& (i + j) < len)
				j++;
			save = &haystack[i];
			if (needle[j] == '\0' && i + j <= len)
				return ((char *)save);
		}
		i++;
	}
	return (NULL);
}
