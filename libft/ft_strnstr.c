/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:45:19 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/06 18:51:25 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	h_len;

	if (haystack == NULL && !len)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	h_len = ft_strlen(haystack);
	if (len > h_len)
		len = h_len;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
