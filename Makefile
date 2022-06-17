NAME = libftprintf.a

CC =  gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar_fd.c ft_puthexa.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c ft_putnbr_unsigned_fd.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY : all clean fclean re

