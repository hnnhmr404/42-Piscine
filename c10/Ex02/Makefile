# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 14:21:50 by hbinti-d          #+#    #+#              #
#    Updated: 2025/05/15 14:32:38 by hbinti-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRCS = ./ft_tail.c

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

# informs MakeFile that whenever these rules are called they need to be executed
.PHONY: all clean fclean re
