/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:38:04 by wchumane          #+#    #+#             */
/*   Updated: 2023/12/24 16:58:55 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	length;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	length = 0;
	while (str[length])
	{
		write(1, &str[length], 1);
		length++;
	}
	return (length);
}
