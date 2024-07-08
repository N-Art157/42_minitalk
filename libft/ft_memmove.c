/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:04:31 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/05 10:42:20 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*c;
	char		*d;

	c = (char *)dst;
	d = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		while (n--)
		{
			*c++ = *d++;
		}
	}
	else
	{
		c += (n - 1);
		d += (n - 1);
		while (n--)
		{
			*c-- = *d--;
		}
	}
	return (dst);
}
