# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:57:07 by jhusso            #+#    #+#              #
#    Updated: 2022/12/19 16:22:28 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_atoi \
	ft_bzero \
	ft_calloc \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_memchr \
	ft_memcmp \
	ft_memcpy \
	ft_memmove \
	ft_memset \
	ft_strchr \
	ft_strcpy \
	ft_strdup \
	ft_strlcat \
	ft_strlcpy \
	ft_strlen \
	ft_strncmp \
	ft_strnstr \
	ft_strrchr \
	ft_tolower \
	ft_toupper \
	ft_substr \
	ft_strjoin \
	ft_putchar_printf \
	ft_putstr_printf \
	ft_putendl_printf \
	ft_putnbr_printf \
	ft_strmapi \
	ft_striteri \
	ft_strtrim \
	ft_itoa \
	ft_split \
	ft_puthex_printf \
	ft_putptr_printf \
	ft_itoa_unsigned \
	ft_putunbr_printf \

SRC_FILES = $(addsuffix .c, $(SRC))

OBJECT_FILES = $(SRC_FILES:.c=.o)

H_FILES = libft.h

CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) -c $(BUILD_FLAGS) $(SRC_FILES) -I $(H_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)

.PHONY: clean
clean:
	rm -f $(OBJECT_FILES)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

