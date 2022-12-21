# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 10:36:15 by jhusso            #+#    #+#              #
#    Updated: 2022/12/21 14:35:27 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft
INCLUDE = ./libft/libft.h

SRC =	ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

H_FILES = ft_printf.h

all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft/ all
	mv ./libft/libft.a ./$(NAME)
	$(CC) -c $(BUILD_FLAGS) $(SRC) -I $(INCLUDE)
	ar rus $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	cd $(LIBFT) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT) && $(MAKE) fclean

re: fclean all


.PHONY: all clean fclean re
