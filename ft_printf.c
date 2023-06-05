/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:48:00 by tfiguero          #+#    #+#             */
/*   Updated: 2023/05/21 17:30:25 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ifs(char s, int ret, va_list a)
{
	if (s == 'c')
		ret = ft_putchar(va_arg(a, int), ret);
	else if (s == 'd')
		ret = ft_putnbr(va_arg(a, int), ret);
	else if (s == 's')
		ret = ft_putstr(va_arg(a, char *), ret);
	else if (s == 'i')
		ret = ft_putnbr(va_arg(a, int), ret);
	else if (s == 'u')
		ret = ft_putnbr_u(va_arg(a, unsigned int), ret);
	else if (s == 'x')
		ret = ft_puthex(va_arg(a, long int), 1, ret);
	else if (s == 'X')
		ret = ft_puthex(va_arg(a, long int), 0, ret);
	else if (s == '%')
		ret = ft_putchar('%', ret);
	else if (s == 'p')
		ret = ft_putptr(va_arg(a, void *), ret);
	else
		return (-1);
	return (ret);
}

int	ft_printf(char const *s, ...)
{
	va_list	a;
	int		ret;

	ret = 0;
	va_start(a, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ret = ft_ifs(*s, ret, a);
			if (ret == -1)
				return (-1);
		}
		else
		{
			ret = ft_putchar(*s, ret);
			if (ret == -1)
				return (-1);
		}
		s++;
	}
	va_end(a);
	return (ret);
}

/* #include <stdio.h>
 int	main(void)
{
	int a;
	a = ft_printf("%d", 10);
	printf("%d", a);
}   */

/*Crear variable len para retornar la cantidad de caracteres escritos*/