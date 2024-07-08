/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:00:01 by anakagaw          #+#    #+#             */
/*   Updated: 2023/08/06 18:37:14 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	char	*substring;
	int		n;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	if ((unsigned int)ft_strlen(s) <= start || len == 0)
		return (ft_calloc(1, 1));
	substring = malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	while (start--)
		s++;
	n = 0;
	while ((size_t)n < len && s[n])
	{
		substring[n] = s[n];
		n++;
	}
	substring[n] = '\0';
	return (substring);
}
