/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:36:47 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/05 11:01:39 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	size_t		n;

	s = src;
	n = dstsize;
	if (n != 0)
	{
		while (n-- > 1)
		{
			*dst++ = *s++;
			if (*(s - 1) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
