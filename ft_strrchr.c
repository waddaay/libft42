/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:48:03 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/05 15:30:10 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*s;

	s = (char *)str;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (s + len);
		len--;
	}
	return (0);
}
