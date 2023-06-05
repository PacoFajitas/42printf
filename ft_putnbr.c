/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:26:27 by tfiguero          #+#    #+#             */
/*   Updated: 2023/05/21 17:31:59 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checks_previos(int *n, int ret)
{
	if (*n == -2147483648)
	{
		ret = ft_putchar('-', ret);
		if (ret == -1)
			return (-1);
		*n = *n * -1;
		ret = ft_putchar('2', ret);
		if (ret == -1)
			return (-1);
		*n = *n - 2000000000;
	}
	if (*n < 0)
	{
		ret = ft_putchar('-', ret);
		if (ret == -1)
			return (-1);
		*n = *n * -1;
	}
	return (ret);
}

int	ft_putnbr(int n, int ret)
{
	ret = ft_checks_previos(&n, ret);
	if (ret == -1)
		return (-1);
	if (n >= 10)
	{
		ret = ft_putnbr(n / 10, ret);
		if (ret == -1)
			return (-1);
		ret = ft_putchar(((int)n % 10) + 48, ret);
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
