# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 10:36:15 by jhusso            #+#    #+#              #
#    Updated: 2022/12/12 13:46:03 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft

SRC =	ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

H_FILES = ft_printf.h

all: $(NAME)

$(NAME): $(SRC)
	cd $(LIBFT) && $(MAKE)
	cp $(LIBFT)/libft.a $@
	$(CC) -c $(BUILD_FLAGS) $(SRC) -I $(H_FILES) -L. -lft
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	cd $(LIBFT) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
