SRCS = ft_printf.c ft_put_hex_maj.c ft_put_hex.c ft_putchar.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putnbr_u.c

OBG = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar -rc

%.o : %.c
	   ${CC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBG}
		${AR}  $(NAME) ${OBG}

all: ${NAME}

clean:
		${RM} ${OBG}

fclean: clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
