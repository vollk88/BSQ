# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcristin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 15:32:06 by tcristin          #+#    #+#              #
#    Updated: 2021/09/07 15:32:11 by tcristin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bsq
C			= main.c make_array.c symbols.c cleaner.c str_map.c solve.c print_square.c errors.c std_input.c
OBJS		= ${SRCS:.c=.o}
PRE			= ./srcs/
SRCS		= ${addprefix ${PRE}, ${C}}
FLAGS		= -Wall -Wextra -Werror

${NAME}: ${OBJS}
	gcc ${FLAGS} -o ${NAME} ${SRCS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re gitÍ