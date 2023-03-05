# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 11:37:48 by juliensilan       #+#    #+#              #
#    Updated: 2023/03/05 22:26:44 by jusilanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

HEADER = include/ft.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		cc $(CFLAGS) main.c -o $(NAME)

clean:
		rm -f *.o
		
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
