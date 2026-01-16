/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 05:06:22 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 16:45:40 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX "0123456789abcdef"

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
void	pf_puthex(unsigned int nbr, int *count);
void	pf_putstr(char *s, int *count);
void	pf_putchar(char c, int *count);
void	pf_putnbr(int n, int *count);
#endif