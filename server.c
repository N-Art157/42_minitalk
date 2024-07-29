/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 00:36:20 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/07/08 15:30:55 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signum)
{
	static int	bit = 0;
	static int	c = 0;

	if (signum == SIGUSR1)
		c |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	act;

	ft_printf("minitalk server pid = %d\n", getpid());
	ft_memset(&act, 0, sizeof(struct sigaction));
	act.sa_handler = signal_handler;
	sigemptyset(&act.sa_mask);
	if (sigaddset(&act.sa_mask, SIGUSR2) == -1
		|| sigaddset(&act.sa_mask, SIGUSR1) == -1)
		error_handler("Sigaddset error", NULL);
	if (sigaction(SIGUSR1, &act, NULL) == -1
		|| sigaction(SIGUSR2, &act, NULL) == -1)
		error_handler("Sigaction error", NULL);
	act.sa_flags = 0;
	while (1)
	{
		pause();
		usleep(WAIT_TIME * 5);
	}
	return (0);
}
