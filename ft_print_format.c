/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_format.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/30 15:28:31 by bengel        #+#    #+#                 */
/*   Updated: 2023/11/15 10:32:13 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (specifier == 'd')
		return (ft_print_lower_hex((long)(va_arg(args, int)), 10));
	else if (specifier == 'i')
		return (ft_print_lower_hex((long)(va_arg(args, int)), 10));
	else if (specifier == 'x')
		return (ft_print_lower_hex((long)(va_arg(args, unsigned int)), 16));
	else if (specifier == 'X')
		return (ft_print_upper_hex((long)(va_arg(args, unsigned int)), 16));
	else if (specifier == 'p')
		return (ft_print_ptr((unsigned long long)(va_arg(args, void *)), 16));
	else if (specifier == 'u')
		return (ft_print_lower_hex((long)
				(va_arg(args, unsigned int)), 10));
	else if (specifier == '%')
		return (ft_print_char('%'));
	else
	{
		write(1, "%", 1);
		write(1, &specifier, 1);
		return (2);
	}
}
