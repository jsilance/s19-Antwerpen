# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 19:53:30 by jusilanc          #+#    #+#              #
#    Updated: 2023/03/08 11:05:07 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c

OBJ = $(addprefix srcs/, ${SRCS:.c=.o})

CFLAGS = -Wall -Wextra -Werror

OBJ = $(OBJECTS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		cc $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
		cc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)
		
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
