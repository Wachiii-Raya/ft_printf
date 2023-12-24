/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:49:18 by wchumane          #+#    #+#             */
/*   Updated: 2023/12/24 16:57:16 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(char c, unsigned int num)
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
		length = ft_print_hex(c, num / 16);
		num %= 16;
	}
	ft_print_char(hex[num]);
	return (length + 1);
}
