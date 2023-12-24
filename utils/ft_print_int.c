/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:29:09 by wchumane          #+#    #+#             */
/*   Updated: 2023/12/24 16:57:29 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_print_int(int num)
{
	int	length;

	length = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		length++;
		num *= -1;
	}
	if (num >= 10)
		length += ft_print_int(num / 10);
	ft_print_char(num % 10 + '0');
	return (length + 1);
}
