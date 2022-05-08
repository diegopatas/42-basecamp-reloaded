# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 15:27:42 by ddiniz            #+#    #+#              #
#    Updated: 2022/04/03 20:05:47 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
REMOVE		= rm -rf
ARCMD		= ar -rc

NAME		= libft.a
FILES		= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS		= ./srcs
INCL		= ./includes

OBJ_FILES	= $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
		$(ARCMD) $(NAME) $(OBJ_FILES)

%.o: $(SRCS)/%.c
		$(CC) $(CFLAGS) -I$(INCL) -o $@ -c $<

clean:
	$(REMOVE) $(OBJ_FILES)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
