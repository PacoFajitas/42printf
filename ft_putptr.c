/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:56:09 by tfiguero          #+#    #+#             */
/*   Updated: 2023/05/22 21:00:14 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr, int ret)
{
	ret = ft_putstr("0x", ret);
	if (ret == -1)
		return (-1);
	ret = ft_puthex_pt((unsigned long long)ptr, 1, ret);
	return (ret);
}
