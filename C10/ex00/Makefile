# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 19:53:30 by jusilanc          #+#    #+#              #
#    Updated: 2023/03/07 19:56:28 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_putchar.c, ft_swap.c, ft_putstr.c, ft_strlen.c, ft_strcmp.c

OBJ = $(addprefix srcs/, ${SRCS:.c=.o})

CFLAGS = -Wall -Wextra -Werror

OBJ = $(OBJECTS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		cc $(CFLAGS) -c -I includes/ft.h -o $@ $^

clean:
		rm -f $(OBJ)
		
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
