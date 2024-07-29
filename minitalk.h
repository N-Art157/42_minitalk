/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:22:19 by nakagawashi       #+#    #+#             */
/*   Updated: 2024/07/08 16:06:14 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <signal.h>

# ifdef __linux__
#  define WAIT_TIME 1000
# endif

# ifdef __APPLE__
#  define WAIT_TIME 50
# endif

void	error_handler(char *main_message, char *sub_message);
int		ft_isnum(char *s);

#endif