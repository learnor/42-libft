# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwen <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 20:39:55 by zwen              #+#    #+#              #
#    Updated: 2018/04/24 23:08:02 by zwen             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

O_FILES = *.o

OPT = -O2

FLAG = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC)
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
