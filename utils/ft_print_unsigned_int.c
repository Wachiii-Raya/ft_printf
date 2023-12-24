/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:55:05 by wchumane          #+#    #+#             */
/*   Updated: 2023/12/24 16:58:59 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int num)
{
	int	length;

	length = 0;
	if (num >= 10)
	{
		length = ft_print_unsigned_int(num / 10);
	}
	ft_print_char(num % 10 + '0');
	return (length + 1);
}
