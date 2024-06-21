
SRC = ft_atoi.c ft_div.c ft_mod.c ft_mul.c ft_putnbr.c ft_sub.c ft_sum.c do-op.c
OBJ = ${SRC:.c=.o}
NAME = do-op
CC = gcc
RM = rm -fr
CFLAGS = -Wall -Wextra -Werror

all:
	@${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all
