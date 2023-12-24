/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 15:15:52 by wchumane          #+#    #+#             */
/*   Updated: 2023/12/24 16:58:36 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_2(char c, unsigned long num)
{
	int		length;
	char	*hex;

	length = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	while (num >= 16)
	{
		length = ft_print_hex_2(c, num / 16);
		num %= 16;
	}
	ft_print_char(hex[num]);
	return (length + 1);
}

int	ft_print_pointer(void *ptr)
{
	int	length;

	length = 0;
	write(1, "0x", 2);
	length += 2;
	length += ft_print_hex_2('x', (unsigned long)ptr);
	return (length);
}

// int	ft_print_pointer(void *ptr)
// {
// 	int		length;
// 	char	*hex;

// 	length = 0;
// 	hex = "0123456789abcdef";
// 	write(1, "0x", 2);
// 	length += 2;
// 	length += ft_print_hex_2('x', (unsigned long)ptr);
// 	return (length);
// }