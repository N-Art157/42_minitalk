/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:59:05 by anakagaw          #+#    #+#             */
/*   Updated: 2024/07/08 14:35:26 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putstr_fd_pf(char	*s, int fd, int *i)
{
	if (s && fd)
	{
		*i += ft_strlen(s);
		write(fd, s, ft_strlen (s));
	}
	if (!s)
	{
		*i += 6;
		write(fd, "(null)", 6);
	}
}
