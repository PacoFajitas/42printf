/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:25:11 by tfiguero          #+#    #+#             */
/*   Updated: 2025/09/20 13:02:02 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, int maj, int ret)
{
	char	*base;

	if (maj == 1)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	
	if (nb > 15)
	{
		ret = ft_puthex(nb / 16, maj, ret);
		if (ret == -1)
			return (-1);
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
