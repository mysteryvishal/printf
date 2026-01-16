/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:07:04 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 13:55:42 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "./libft.h"

static int	handle_type(const char type, va_list args)
{
	if (type == 'd' || type == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (type == 'c' || type == '%')
		ft_putchar_fd(va_arg(args, char), 1);
	else if (type == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;

	va_start(args, format);
	while(*format)
	{
		if(*format == '%')
		{
			format++;
			if (handle_type(*format, args, &count))
				return (1);
		}
		ft_putchar_fd(*format, 1);
		count++;
	}
	va_end(args);
	return (count);
}
