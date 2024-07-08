/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:56:52 by anakagaw          #+#    #+#             */
/*   Updated: 2023/08/05 10:51:55 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char	const *s1, char	const *s2)
{
	char		*dst;
	size_t		len_s1;
	size_t		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen (s1);
	len_s2 = ft_strlen (s2);
	dst = malloc ((len_s1 + len_s2 + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (*s1)
	{
		*(dst++) = *(s1++);
	}
	while (*s2)
	{
		*(dst++) = *(s2++);
	}
	*dst = '\0';
	return (dst - len_s1 - len_s2);
}
