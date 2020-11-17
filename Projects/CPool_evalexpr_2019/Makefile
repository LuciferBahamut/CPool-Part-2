##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## evalexpr
##

NAME	=	eval_expr

SRC	=	src/eval_expr.c \
		src/my_put_nbr.c \
		src/my_putchar.c \
		main.c

CC	=	gcc

CPPFLAGS	=	-I/include/

HEADER	=	my.h

CFLAGS	=	-W -Wall

DEFLAGS =	-W -Wextra -Wall -g3

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

debug:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all debug clean fclean re
