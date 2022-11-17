# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 14:17:41 by araji-af          #+#    #+#              #
#    Updated: 2022/11/15 17:54:43 by araji-af         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS_M	= ft_printf.c ft_printf_utils.c ft_printf_bases.c

OBJ_M	= $(SRCS_M:.c=.o)

CC		= cc

AR		= ar rc

CFLAGS	= -Wall -Wextra -Werror

all 	: $(NAME)

$(NAME)	: $(OBJ_M)
	$(AR) $(NAME) $(OBJ_M)

$(OBJ_M) : $(SRCS_M) ft_printf.h
	$(CC) -c $(CFLAGS) $(SRCS_M)

clean	:
	rm -f $(OBJ_M)

fclean	: clean
	rm -f $(NAME)

re		: fclean all