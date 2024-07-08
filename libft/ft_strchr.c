/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:32:28 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/05 11:00:05 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	toc;

	toc = (char)c;
	while (*s)
	{
		if (*s == toc)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == toc)
	{
		return ((char *)s);
	}
	return (0);
}
