/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:11:04 by wchumane          #+#    #+#             */
/*   Updated: 2023/12/24 17:04:22 by wchumane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_hex(char c, unsigned int num);
int		ft_print_int(int num);
int		ft_print_pointer(void *ptr);
int		ft_print_string(char *str);
int		ft_print_unsigned_int(unsigned int num);

#endif /* FT_PRINTF_H */