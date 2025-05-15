# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 14:23:04 by hbinti-d          #+#    #+#              #
#    Updated: 2025/05/15 14:33:21 by hbinti-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
SRCS = ./ft_hexdump.c

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
