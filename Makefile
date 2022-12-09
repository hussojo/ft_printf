# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 10:36:15 by jhusso            #+#    #+#              #
#    Updated: 2022/12/09 13:25:04 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

.INCLUDEDIRS : libft
.INCLUDE : <Makefile>

CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all: $(NAME)

$(NAME):
	$(CC) -c $(BUILD_FLAGS) $(SRC) -I $(HEADER)
	 -M $(INCLUDE) $(INCLUDEDIRS)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
