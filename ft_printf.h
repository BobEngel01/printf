/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/30 13:09:12 by bengel        #+#    #+#                 */
/*   Updated: 2023/11/15 11:20:45 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h>
# include <aio.h>
# include <stddef.h>
# include <stdlib.h>
# include <bsd/string.h>

int			ft_printf(const char *format, ...);
int			ft_print_format(char specifier, va_list args);
int			ft_print_char(int c);
int			ft_print_str(char *str);
int			ft_print_lower_hex(long n, int base);
int			ft_print_upper_hex(long n, int base);
int			ft_print_ptr(unsigned long long ptr, unsigned long long base);
int			ft_print_ptr_hex(unsigned long long ptr, unsigned long long base);

#endif
