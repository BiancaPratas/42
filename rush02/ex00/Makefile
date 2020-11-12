# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpratas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/07 14:28:49 by bpratas           #+#    #+#              #
#    Updated: 2020/11/08 10:58:03 by dda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/main.c ./srcs/is_nb_valid.c ./srcs/is_dict_valid.c ./srcs/libft.c 

OBJS	= ${SRCS:.c=.o}

INCS	= includes

NAME	= rush-02

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${CFLAGS}

all:		${NAME}

run:
			./${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

normH:
			norminette -R CheckForbiddenSourceHeader */*.h

normC:
			norminette -R CheckDefine */*.c

find_sources:
			find srcs -type f -name "*.c" | xargs -I{} echo ./{} | tr '\n' ' '

re:			fclean all

.PHONY:		all clean fclean re .c.o
