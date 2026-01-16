/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:07:04 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 16:51:37 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	handle_type(const char type, va_list args, size_t *count)
{
	if (type == 'd' || type == 'i')
		pf_putnbr(va_arg(args, int), 1);
	else if (type == 'c' || type == '%')
		pf_putchar(va_arg(args, char), count);
	else if (type == 's')
		pf_putstr(va_arg(args, char *), count);
	else if (type == 'u')
		pf_putunbr(va_arg(args, unsigned int), count);
	else if (type == 'x' || type == 'X')
		pf_puthex(va_arg(args, unsigned int), count);
	else if (type == 'p')
		pf_puthex(va_arg(args, unsigned int), count);
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
		pf_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
