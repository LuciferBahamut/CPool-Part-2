##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	calc

SRC	=	src/eval_expr.c \
		src/gest_str.c \
		src/infin.c \
		src/infinidiv.c \
		src/infinimod.c \
		src/infinimult.c \
		src/infinisub.c \
		src/my_atoi.c \
		src/my_putchar.c \
		src/my_put_nbr.c \
		src/my_putstr.c \
		src/my_revstr.c \
		src/my_strlen.c \
		src/my_trans.c \
		src/my_strcmp.c \
		src/main.c

CC	=	gcc

CPPFLAGS	=	-I./include/

CFLAGS	=	-W -Wextra -Wall -g3

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *# \
	rm -f *~

re:     fclean all

.PHONY: all clean fclean re
