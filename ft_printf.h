/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:14:00 by tfiguero          #+#    #+#             */
/*   Updated: 2023/05/21 17:27:02 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *s, ...);
int	ft_putchar(char const c, int ret);
int	ft_putstr(char const *s, int ret);
int	ft_puthex(unsigned int nb, int maj, int ret);
int	ft_putnbr(int nb, int ret);
int	ft_putptr(void *ptr, int ret);
int	ft_puthex_pt(unsigned long long nb, int maj, int ret);
int	ft_putnbr_u(unsigned int n, int ret);
#endif