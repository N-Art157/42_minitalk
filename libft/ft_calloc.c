/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:22:05 by anakagaw          #+#    #+#             */
/*   Updated: 2023/08/06 18:40:11 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t	size)
{
	void	*temp;

	if (count != 0 && size != 0)
	{
		if (count > SIZE_MAX / size)
			return (NULL);
	}
	temp = malloc (count * size);
	if (temp == NULL)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
