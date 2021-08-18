CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

OBJ = $(SRC:.c=.o)

SRC = ft_printf.c ft_strlen.c ft_putchar.c ft_putstr.c ft_putnbr_base.c ft_putnbr_base16_mini.c ft_putnbr_base16_maj.c ft_putnbr_base16_mini_long.c \
ft_putnbr.c ft_putunsignednbr.c Converter_c.c Converter_di.c Converter_s.c Converter_u.c Converter_Xx.c Converter_x.c Converter_p.c Converters.c \

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONEY: libftprintf.a all clean fclean re