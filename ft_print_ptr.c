/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ptr_hex.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/31 13:02:49 by bengel        #+#    #+#                 */
/*   Updated: 2023/11/15 11:32:41 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr, unsigned long long base)
{
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	ft_printf("0x");
	return (ft_print_ptr_hex(ptr, base) + 2);
}

int	ft_print_ptr_hex(unsigned long long ptr, unsigned long long base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (ptr < base)
	{
		return (ft_print_char(symbols[ptr]));
	}
	else
	{
		count = ft_print_ptr_hex(ptr / base, base);
		return (count + ft_print_ptr_hex(ptr % base, base));
	}
}
