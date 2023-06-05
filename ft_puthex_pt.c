/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:25:11 by tfiguero          #+#    #+#             */
/*   Updated: 2023/05/21 17:24:55 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pt(unsigned long long nb, int maj, int ret)
{
	char	*base;

	if (maj == 1)
	{
		base = "0123456789abcdef";
	}
	else if (maj == 0)
	{
		base = "0123456789ABCDEF";
	}
	if (nb > 15)
	{
		ret = ft_puthex_pt(nb / 16, maj, ret);
		ret = ft_putchar(base[nb % 16], ret);
		if (ret == -1)
			return (-1);
	}
	else
	{
		ret = ft_putchar(base[nb], ret);
		if (ret == -1)
			return (-1);
	}
	return (ret);
}
