# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 19:27:20 by flmartin          #+#    #+#              #
#    Updated: 2023/07/04 15:51:24 by flmartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ./src
OBJECTS = ./bin
INCLUDES = ./inc

SRCS = ft_node.c \
	   ft_error.c \
	   ft_actions.c \
	   main.c \

OBJS = $(addprefix $(OBJECTS)/, $(SRCS:.c=.o))

NAME = push_swap

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
CINCLUDES = -I $(INCLUDES)
LIB =  


GREEN = "\033[1;32m"

$(OBJECTS)/%.o: $(SOURCES)/%.c
				@mkdir -p $(dir $@)
				@$(CC) $(CFLAGS) -o $@ -c $< $(CINCLUDES)

all: $(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(CINCLUDES) -o $(NAME) $(OBJS) $(SOURCES)/libft.a $(SOURCES)/libftprintf.a

clean:
		@$(RM) $(OBJECTS)

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re lib
