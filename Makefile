# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchumane <wchumane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 18:11:13 by wchumane          #+#    #+#              #
#    Updated: 2023/12/24 15:25:09 by wchumane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
SRCS		=	ft_printf.c\
				utils/ft_print_char.c\
				utils/ft_print_hex.c\
				utils/ft_print_int.c\
				utils/ft_print_pointer.c\
				utils/ft_print_string.c\
				utils/ft_print_unsigned_int.c
				
OBJS		=	${SRCS:.c=.o}
CC			=	cc
FLAGS		=	-Wall -Wextra -Werror

%.o: %.c ft_printf.h
			${CC} -I. -c $< -o ${<:.c=.o}

all:		${NAME}
${NAME}:	${OBJS}	ft_printf.h
				ar rcs ${NAME} ${OBJS}

clean:		
				rm -f ${OBJS}

fclean:		clean
				rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
				