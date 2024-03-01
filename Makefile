NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = file.c printf.c func.c libft/ft_putstr_fd.c libft/ft_strlen.c libft/ft_putchar_fd.c libft/ft_putnbr_fd.c func_2.c

OBJS = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} ft_printf.h Makefile
	ar -rcs ${NAME} $(OBJS)

%.o:%.c
	${CC} ${FLAGS} -c  $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean $(NAME)

.PHONY: all clean fclean re
