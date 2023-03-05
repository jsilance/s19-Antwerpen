# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juliensilance <juliensilance@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 11:37:48 by juliensilan       #+#    #+#              #
#    Updated: 2023/03/05 18:17:02 by juliensilan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJECTS = src/ft_putchar.c, src/ft_swap.c, src/ft_putstr.c, src/ft_strlen.c, src/ft_strcmp.c

HEADER = include/ft.h

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

%.o: %.c
		cc $(CFLAGS) -c -I $(HEADER) -o src/$@ $?

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all:

clean:

fclean:

re: