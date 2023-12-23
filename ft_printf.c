/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:04:18 by          #+#    #+#             */
/*   Updated: 2023/12/23 10:11:03 by         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int ft_printf(const char *format, ...)
{
    va_list dots;

    va_start(dots, format);
    printf("format: %s\n", format);
    printf("dots: %s\n", dots);
    // fucntion for checking format %s %d %c %p %i %u %x %X
}

// Test
int main()
{
    ft_printf("%s", "World");
    return (0);   
}