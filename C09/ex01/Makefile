# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 11:37:48 by juliensilan       #+#    #+#              #
#    Updated: 2023/03/07 13:26:40 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJECTS = src/ft_putchar.c, src/ft_swap.c, src/ft_putstr.c, src/ft_strlen.c, src/ft_strcmp.c

HEADER = include/ft.h

CFLAGS = -Wall -Wextra -Werror

OBJ = $(OBJECTS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		cc $(CFLAGS) -c -I $(HEADER) -o $@ $?

clean:
		rm -f src/*.o
		
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
