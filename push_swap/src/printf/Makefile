# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 17:06:31 by flmartin          #+#    #+#              #
#    Updated: 2023/03/23 12:45:00 by flmartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_cases.c ft_cases2.c ft_printf.c ft_putchar_fd.c ft_putnbr.c ft_putnbr_base.c ft_strlen.c ft_putstr_fd.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): 	$(OBJS)
			ar rc $@ ${OBJS}
			ranlib ${NAME}

clean :
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all 

.PHONY: all clean fclean re
