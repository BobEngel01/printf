/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_upper_hex.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/31 13:01:13 by bengel        #+#    #+#                 */
/*   Updated: 2023/11/15 11:34:04 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_upper_hex(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n == 0)
		return (ft_print_char('0'));
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_print_upper_hex(-n, base) + 1);
	}
	else if (n < base)
	{
		return (ft_print_char(symbols[n]));
	}
	else
	{
		count = ft_print_upper_hex(n / base, base);
		return (count + ft_print_upper_hex(n % base, base));
	}
}

int	ft_print_lower_hex(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n == 0)
		return (ft_print_char('0'));
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_print_lower_hex(-n, base) + 1);
	}
	else if (n < base)
	{
		return (ft_print_char(symbols[n]));
	}
	else
	{
		count = ft_print_lower_hex(n / base, base);
		return (count + ft_print_lower_hex(n % base, base));
	}
}
