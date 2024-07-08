/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:10:55 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/07/08 16:05:07 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "minitalk.h"

void	error_handler(char *main_message, char *sub_message)
{
	ft_printf(RED"Error: %s"ENDC, main_message);
	if (sub_message)
		ft_printf(" (%s)", sub_message);
	ft_printf("\n");
	exit(1);
}

int	ft_isnum(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (s[0] == '-')
		i = 1;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	if (s[0] == '-' && i == 1)
		return (0);
	return (1);
}
