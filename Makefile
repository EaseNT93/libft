# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpants <dpants@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 01:28:00 by dpants            #+#    #+#              #
#    Updated: 2021/04/21 01:28:00 by dpants           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c\
	ft_memccpy.c\
	ft_memcpy.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strlen.c\
	ft_strrchr.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_strnstr.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_itoa.c\
	ft_strmapi.c

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror -c

CC = gcc

RM = rm -f

all: ${NAME}

${NAME}: ${OBJ}
		${CC} ${CFLAGS} ${SRC}
		ar rc $(NAME)
		ranlib $(NAME)
		
so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
