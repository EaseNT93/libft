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
	ft_memmove.c

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
