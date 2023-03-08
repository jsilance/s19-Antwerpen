# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 19:53:30 by jusilanc          #+#    #+#              #
#    Updated: 2023/03/08 11:40:26 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/main.c

OBJ = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

%.o: %.c
		cc ${CFLAGS} -c -o $@ $?

${NAME}: ${OBJ}
		cc ${CFLAGS} ${OBJ} -o ${NAME}
		
all: ${NAME}

clean:
		rm -f ${OBJ}
		
fclean: clean
		rm -f ${NAME}

.PHONY: clean all fclean
