/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 05:06:22 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/17 13:20:45 by vmistry          ###   ########.fr       */
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
void	pf_puts(char *s, int *count);
void	pf_putc(int c, int *count);
void	pf_putid(int n, int *count);
void	pf_putu(unsigned int n, int *count);
void	pf_puth(unsigned long long nbr, int *count, int upper);
void	pf_putp(unsigned long long p, int *count);
#endif
