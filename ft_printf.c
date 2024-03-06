/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/30 11:39:07 by bengel        #+#    #+#                 */
/*   Updated: 2023/11/15 11:41:48 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += ft_print_format(*(++format), args);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
