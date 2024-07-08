/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakagaw <anakagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:10:37 by anakagaw          #+#    #+#             */
/*   Updated: 2024/07/08 15:33:59 by anakagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

void	ft_putstr_fd_pf(char	*s, int fd, int *i);
void	ft_putchar_fd_pf(char c, int fd, int *i);
void	ft_putnbr_fd_pf(int nb, int fd, int *i);
void	ft_putnb_bs_fd_pf(int nbr, char *base, int fd, int *i);
void	ft_putnbr_base_p(unsigned long nbr, char *base, int fd, int *i);
int		ft_printf(const char	*arg_1, ...);
#endif