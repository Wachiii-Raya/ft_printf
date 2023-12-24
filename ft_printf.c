/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:10:55 by wchumane          #+#    #+#             */
/*   Updated: 2023/12/24 16:54:33 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(const char char_format, va_list arg)
{
	int	length;

	if (char_format == 'c')
		length = ft_print_char(va_arg(arg, int));
	else if (char_format == 's')
		length = ft_print_string(va_arg(arg, char *));
	else if (char_format == 'd' || char_format == 'i')
		length = ft_print_int(va_arg(arg, int));
	else if (char_format == 'u')
		length = ft_print_unsigned_int(va_arg(arg, unsigned int));
	else if (char_format == 'x')
		length = ft_print_hex('x', va_arg(arg, unsigned int));
	else if (char_format == 'X')
		length = ft_print_hex('X', va_arg(arg, unsigned int));
	else if (char_format == '%')
		length = ft_print_char('%');
	else if (char_format == 'p')
		length = ft_print_pointer(va_arg(arg, void *));
	else
		length = 0;
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	dots;
	int		len;

	if (!format)
		return (0);
	len = 0;
	va_start(dots, format);
	while ((*format != '\0'))
	{
		if (*format == '%')
			len += ft_format_handler(*(++format), dots);
		else
		{
			write(1, format, 1);
			len++;
		}
		format++;
	}
	va_end(dots);
	return (len);
}

// int	main(void)
// {

// 	printf ( "fake= %d\n" ,ft_printf("%d", -10));

// 	printf ("\n\n\n");	
// //	printf ( "real= %d\n" ,printf("%d", -10));
// 	return (0);
// }