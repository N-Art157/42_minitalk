/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 02:42:12 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/04 16:24:52 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	unsigned char	*tos;
	unsigned char	toc;

	toc = (unsigned char)c;
	tos = (unsigned char *)s;
	while (n--)
	{
		if (*tos == toc)
			return ((void *)tos);
		tos++;
	}
	return (NULL);
}
