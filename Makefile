NAME = libft.a

SRC = ft_strlen.c ft_strncmp.c \
	ft_isdigit.c ft_isalpha.c \
	ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_memset.c \
	ft_bzero.c ft_memcpy.c \

OBJS = ${SRC:.c=.o}

RM = rm -f

all:	${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean all fclean re
