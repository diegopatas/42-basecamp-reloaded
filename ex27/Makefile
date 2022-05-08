# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 18:24:23 by ddiniz            #+#    #+#              #
#    Updated: 2022/04/03 20:05:33 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
REMOVE		= rm -rf
FILES		= ft_display_file.c

NAME	= ft_display_file
OBJ_FILES	= $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJ_FILES)

fclean: clean
	$(REMOVE) $(NAME)

.PHONY: all clean fclean
