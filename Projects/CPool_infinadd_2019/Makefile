##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## infinadd
##

NAME	=	infin_add

SRC	=	src/my_putchar.c \
		src/my_putstr.c \
		src/my_revstr.c \
		main.c

CC	=	gcc

CPPFLAGS	=	-I./include/

HEADER	=	my.h

CFLAGS	=	-W -Wall

DEFLAGS	=	-W -Wextra -Wall -g3

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

unit_test:
		$(CC) -o unit_tests main.c tests/unit_test.c --coverage -lcriterion $(CPPFLAGS)

debug:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all unit_test debug clean fclean re
