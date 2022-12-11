# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 10:36:15 by jhusso            #+#    #+#              #
#    Updated: 2022/12/11 14:20:59 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c


OBJ = $(SRC:.c=.o)

H_FILES = ft_printf.h

LIBFT = libft

CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all: $(NAME)

$(NAME):
	cd $(LIBFT) && $(MAKE)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(CC) -c $(BUILD_FLAGS) $(SRC) $()-I $(H_FILES)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f libft/*.o

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a .

re: fclean all

.PHONY: all clean fclean re
