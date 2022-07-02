/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:57:25 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/18 01:43:09 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count(long n)
{
	int		count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		count = 1;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		count;
	char	*ptr;

	nb = n;
	count = ft_count(nb);
	ptr = (char *)malloc(count + 1);
	if (!ptr)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		ptr[0] = '-';
	}
	ptr[count] = '\0';
	count--;
	while (nb >= 0)
	{
		ptr[count] = nb % 10 + 48;
		count--;
		nb /= 10;
		if (nb == 0)
			break ;
	}
	return (ptr);
}
