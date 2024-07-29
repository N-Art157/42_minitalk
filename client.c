/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 01:57:49 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/07/08 16:04:28 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_message(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) != 0)
		{
			if (kill(pid, SIGUSR1) == -1)
				error_handler("Error", NULL);
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				error_handler("Error", NULL);
		}
		usleep(WAIT_TIME);
		bit++;
	}
}

int	main(int argc, char	**argv)
{
	int	pid;
	int	index;

	if (argc != 3)
		error_handler("Invalid arguments", "Usage: ./client [PID] [message]");
	if (ft_isnum(argv[1]) == 0)
		error_handler("Invalid PID", NULL);
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		error_handler("Invalid PID", "PID must be a positive integer");
	index = 0;
	while (argv[2][index])
	{
		send_message(pid, argv[2][index]);
		index++;
	}
	return (0);
}
