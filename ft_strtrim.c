/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:41:07 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/07 16:56:24 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = (int)ft_strlen(s1);
	while (i < len)
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	return (i);
}

int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = (int)ft_strlen(s1);
	while (i < len)
	{
		if (!ft_strchr(set, s1[len - i - 1]))
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!set)
	{
		return (ft_strdup(s1));
	}
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	ptr = (char *)malloc(end - start + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + start, end - start + 1);
	return (ptr);
}
