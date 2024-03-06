/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/30 16:13:03 by bengel        #+#    #+#                 */
/*   Updated: 2023/11/06 13:59:16 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (*str != '\0')
	{
		ft_print_char((int)*str);
		count++;
		str++;
	}
	return (count);
}
