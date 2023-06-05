/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:25:23 by tfiguero          #+#    #+#             */
/*   Updated: 2023/05/21 17:08:01 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char const *s, int ret)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		ret += 6;
	}
	else
	{
		while (s[i] != '\0')
		{
			ret = ft_putchar(s[i], ret);
			if (ret == -1)
				return (ret);
			i++;
		}
	}
	return (ret);
}
