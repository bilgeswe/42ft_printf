NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_declen.c \
	ft_printmychar.c \
	ft_printmystr.c \
	ft_printmyptr.c \
	ft_putchar_fd.c \
	ft_printmynbr.c \
	ft_itoa.c \
	ft_printmyunsnbr.c \
	ft_printmyhxdcml.c  \
	ft_hexlen.c \
	ft_printf.c \
	ft_catchchar.c \
	ft_strdup.c \
	ft_printmypercent.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re