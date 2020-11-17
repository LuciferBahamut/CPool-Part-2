##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile rush 3
##

SRC	=	src/main.c			\
		src/rush3.c			\
		src/my_putchar.c		\
		src/error_handling.c		\
		src/my_putstr.c			\
		src/my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

CC	=	gcc

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include/

TEST_FLAGS	=	-g3 -W -Werror

all	:	$(OBJ)
		$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ)

debug	:	$(OBJ)
		$(CC) $(CFLAGS) $(TEST_FLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all debug clean fclean re
