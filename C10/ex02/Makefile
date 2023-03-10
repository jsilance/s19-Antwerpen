# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 19:53:30 by jusilanc          #+#    #+#              #
#    Updated: 2023/03/10 13:39:18 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = srcs/main.c srcs/ft_tools.c

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

%.o: %.c
		cc ${CFLAGS} -c -o $@ $?

${NAME}: ${OBJ}
		# cc ${CFLAGS} -fsanitize=address -I includes/ft_tail.h ${OBJ} -o ${NAME}
		cc ${CFLAGS} -g -I includes/ft_tail.h ${OBJ} -o ${NAME}
		
all: ${NAME}

clean:
		rm -f ${OBJ}
		
fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: clean re all fclean
