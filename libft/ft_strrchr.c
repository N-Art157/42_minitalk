/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 01:48:46 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/06 17:27:48 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	c_cp;
	char	*ss;
	int		n;

	if (*s == '\0' && c == '\0')
		return ((char *)s);
	else if (*s == '\0')
		return (NULL);
	c_cp = (char)c;
	n = ft_strlen (s) + 1;
	ss = NULL;
	while (n--)
	{
		if (*s == c_cp)
		{
			ss = (char *)s;
		}
		s++;
	}
	if (ss != NULL)
		return (ss);
	return (0);
}
