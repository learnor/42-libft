# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwen <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 20:39:55 by zwen              #+#    #+#              #
#    Updated: 2018/04/24 16:23:42 by zwen             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

O_FILES = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -O2 -c $(SRC)
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
