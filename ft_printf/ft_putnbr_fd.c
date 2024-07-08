/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:52:49 by anakagaw          #+#    #+#             */
/*   Updated: 2024/07/08 14:35:31 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	writer(int nb, int fd, int *i)
{
	char	*str;

	str = ft_itoa(nb);
	*i += ft_strlen(str);
	write(fd, str, ft_strlen(str));
	free(str);
}

void	ft_putnbr_fd_pf(int nb, int fd, int *i)
{
	if (nb == -2147483648)
	{
		*i += 11;
		write(fd, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		*i += 1;
		write(fd, "0", 1);
	}
	else
	{
		writer(nb, fd, i);
	}
}
