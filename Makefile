# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwen <zwen@student.42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 20:39:55 by zwen              #+#    #+#              #
#    Updated: 2018/05/28 01:02:40 by zwen             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

CC			:=	gcc
CFLAGS		+=	-Wall -Wextra -Werror

FT_LIBC		:=	ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr	\
				ft_memcmp ft_strlen ft_strdup ft_strcpy ft_strncpy	\
				ft_strcat ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr	\
				ft_strnstr ft_strcmp ft_strncmp ft_atoi ft_isalpha ft_isdigit	\
				ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower

FT_ADD_ON	:=	ft_memalloc ft_memccpy ft_memdel ft_strnew ft_strdel ft_strclr 	\
				ft_striter	\
				ft_striteri ft_strmap ft_strmapi ft_strequ ft_strnequ ft_strsub	\
				ft_strjoin ft_strtrim ft_strsplit ft_itoa ft_putchar ft_putstr	\
				ft_putendl ft_putnbr ft_putchar_fd ft_putstr_fd ft_putendl_fd	\
				ft_putnbr_fd

FT_LST		:=	ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap

FT_EXTRA	:=	ft_islower ft_isupper ft_isspace ft_isprime ft_wcount ft_strndup

FILES		:=  $(FT_LIBC) $(FT_ADD_ON) $(FT_LST) $(FT_EXTRA)

SRC			:=	$(addsuffix .c, $(FILES))
OBJ			:=	$(SRC:.c=.o)

.PHONY	= all clean fclean re

all:	$(NAME)

$(OBJ):	%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mCompiled Library\033[0m"

clean:
	@rm -f $(OBJ)
	@rm -f *.DS_Store
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[32mRemoved Library\033[0m"

re: fclean all
