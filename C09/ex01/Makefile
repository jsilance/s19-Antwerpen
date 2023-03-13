# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 11:37:48 by juliensilan       #+#    #+#              #
#    Updated: 2023/03/13 17:07:06 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS = ${addprefix ${PRE}, ${SRC}}

PRE = ./srcs/

OBJ = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

%.o: %.c
		cc ${CFLAGS} -I ./includes/ -c $< -o ${<:.c=.o}

clean:
		rm -f ${OBJ}
		
fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: clean re all fclean
