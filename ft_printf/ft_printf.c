/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:05:33 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/07/08 15:34:37 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_check(const char	*arg_1, va_list *ap, int i)
{
	if (*arg_1 == 'c')
		ft_putchar_fd_pf(va_arg(*ap, int), 1, &i);
	else if (*arg_1 == 's')
		ft_putstr_fd_pf(va_arg(*ap, char *), 1, &i);
	else if (*arg_1 == 'p')
	{
		i += 2;
		write(1, "0x", 2);
		ft_putnbr_base_p(va_arg(*ap, unsigned long), "0123456789abcdef", 1, &i);
	}
	else if (*arg_1 == 'd' || *arg_1 == 'i')
		ft_putnbr_fd_pf(va_arg(*ap, int), 1, &i);
	else if (*arg_1 == 'u')
		ft_putnb_bs_fd_pf(va_arg(*ap, long), "0123456789", 1, &i);
	else if (*arg_1 == 'x')
		ft_putnb_bs_fd_pf(va_arg(*ap, unsigned int), "0123456789abcdef", 1, &i);
	else if (*arg_1 == 'X')
		ft_putnb_bs_fd_pf(va_arg(*ap, unsigned int), "0123456789ABCDEF", 1, &i);
	else if (*arg_1 == '%')
	{
		i++;
		write (1, "%", 1);
	}
	arg_1++;
	return (i);
}

int	ft_printf(const char	*arg_1, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, arg_1);
	if (!arg_1)
		return (0);
	while (*arg_1)
	{
		if (*arg_1 != '%')
		{
			i++;
			write(1, arg_1, 1);
		}
		else if (*arg_1 == '%')
		{
			arg_1++;
			i = ft_check(arg_1, &ap, i);
		}
		arg_1++;
	}
	va_end(ap);
	return (i);
}
