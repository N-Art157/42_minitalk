/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:17:53 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/05 11:01:54 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	max;
	size_t	k;
	size_t	l;

	k = ft_strlen(src);
	if (size == 0)
		return (k);
	l = ft_strlen(dest);
	if (size <= l)
		return (size + k);
	max = size - 1 - l;
	i = 0;
	while (i < max)
	{
		if (src[i] == '\0')
			break ;
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (k + l);
}
