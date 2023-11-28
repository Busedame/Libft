# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 18:21:29 by nholbroo          #+#    #+#              #
#    Updated: 2023/11/28 13:32:09 by nholbroo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror
OPTIONS = -c

SRC= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_putendl_fd.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putnbr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_putchar_fd.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_putstr_fd.c

OBJ=$(SRC:.c=.o)

NAME= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(OPTIONS) $< -o $@

test: $(OBJ)
	$(CC) test.c $^ -lbsd
	./a.out

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.txt

re: fclean all

.PHONY: all clean fclean re