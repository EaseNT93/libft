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

SRCS = 

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

CC = gcc

RM = rm -f


all: ${NAME}


${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}
		${GCC} ${CFLAGS} ${SRCS} -o ${NAME} -I includes

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re