# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 14:44:31 by hbinti-d          #+#    #+#              #
#    Updated: 2025/05/15 14:44:37 by hbinti-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = srcs/ft_atoi.c srcs/ft_util.c srcs/ft_math.c srcs/main.c

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

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
