# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkartit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 22:36:57 by mkartit           #+#    #+#              #
#    Updated: 2023/10/03 22:36:59 by mkartit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c 
OBJ = ${SRC:.c=.o} 
INC = includes 
NAME = libft.a 
LIBC = ar rcs
LIBR = ranlib 
CC = cc 
RM = rm -f 
CFLAGS = -Wall -Wextra -Werror 

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ} 
	${LIBR} ${NAME} 

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean 
	${RM} ${NAME}

re: fclean all
