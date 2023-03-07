# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 11:37:48 by juliensilan       #+#    #+#              #
#    Updated: 2023/03/07 20:39:22 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = C01_tester.a

SRC = ex00/ft_ft.c, ex01/ft_ultimate_ft.c, ex02/ft_swap.c, ex03/ft_div_mod.c,\
		ex04/ft_ultimate_div_mod.c, ex05/ft_putstr.c, ex06/ft_strlen.c,\
		ex07/ft_rev_int_tab.c, ex08/ft_sort_int_tab.c

OBJ = $(${SRCS:.c=.o})

CFLAGS = -Wall -Wextra -Werror

OBJ = $(OBJECTS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o: %.c
		cc $(CFLAGS) -c -o $@ $^

clean:
		rm -f $(OBJ)
		
fclean: clean
		rm -f $(NAME)

re: fclean all

tesst: ./$(NAME)

.PHONY: clean all re fclean
