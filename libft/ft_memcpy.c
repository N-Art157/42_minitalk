/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 22:35:17 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/05 10:43:34 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*c;
	unsigned char		*d;

	c = (unsigned char *)dst;
	d = (unsigned char *)src;
	if (!c && !d)
		return (dst);
	while (n-- > 0)
	{
		*c++ = *d++;
	}
	return (dst);
}
