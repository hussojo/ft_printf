# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 10:36:15 by jhusso            #+#    #+#              #
#    Updated: 2022/12/12 12:00:58 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

H_FILES = ft_printf.h

LIBFT = libft

CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(SRC)
	cd $(LIBFT) && $(MAKE)
	cp $(LIBFT)/libft.a $@
	$(CC) -c $(BUILD_FLAGS) $(SRC) -I $(H_FILES)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	cd $(LIBFT) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
