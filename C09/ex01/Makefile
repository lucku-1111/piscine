# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 13:06:55 by seoklee           #+#    #+#              #
#    Updated: 2020/11/04 13:07:01 by seoklee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR	= ./srcs
SRCS		= ${SRCS_DIR}/ft_putchar.c ${SRCS_DIR}/ft_swap.c ${SRCS_DIR}/ft_putstr.c ${SRCS_DIR}/ft_strlen.c ${SRCS_DIR}/ft_strcmp.c
OBJS		= ${SRCS:.c=.o}
HEADER_DIR	= ./includes
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rc
TARGET		= libft.a

all:		${TARGET}

${TARGET}:	${OBJS}
			${AR} $@ $<

${OBJS}:	${SRCS}
			${CC} ${CFLAGS} -c $< -o $@ -I${HEADER_DIR}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${TARGET}

re:			fclean all

.PHONY:		all clean fclean re
