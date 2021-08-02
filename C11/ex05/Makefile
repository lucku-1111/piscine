# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 00:43:55 by seoklee           #+#    #+#              #
#    Updated: 2020/11/05 01:35:03 by seoklee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ./main.c ./ft_atoi.c ./ft_putnbr.c 
OBJS		= ${SRCS:.c=.o}
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
TARGET		= do-op
RM			= rm -f

all:		${TARGET}

${TARGET}:	${OBJS}
			${CC} ${CFLAGS} $^ -o $@

%.o:		%.c
			${CC} ${CFLAGS} -c $^ -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${TARGET}

re:			fclean all

.PHONY:		all clean fclean re
