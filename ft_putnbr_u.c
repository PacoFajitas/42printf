/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:26:27 by tfiguero          #+#    #+#             */
/*   Updated: 2023/05/21 17:09:54 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n, int ret)
{
	if (n >= 10)
	{
		ret = ft_putnbr_u(n / 10, ret);
		if (ret == -1)
			return (-1);
		ret = ft_putchar((n % 10) + 48, ret);
		if (ret == -1)
			return (-1);
	}
	if (n < 10)
	{
		ret = ft_putchar((char)(n + 48), ret);
		if (ret == -1)
			return (-1);
	}
	return (ret);
}
