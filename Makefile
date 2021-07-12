##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_sokoban
##

SRC		=	src/main.c	\
			src/readme.c	\
			src/check_input.c	\
			src/bombyx.c	\
			lib/my/my_strcmp.c	\
			lib/my/my_getnbr.c	\
			lib/my/my_str_isnum.c	\
			##addprefix

OBJ	=	$(SRC:.c=.o)

LIB	= -L./lib -lmy

CFLAGS 	+= -W -Wall -Wextra -g -lncurses

CRITERION_FLAGS	=	--coverage -lcriterion

CPPFLAGS = -I./include

CC = gcc

NAME	=	106bombyx

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my
		$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LIB)
		rm -f $(OBJ)

.PHONY: clean fclean re all

clean:
		rm -f $(OBJ)

fclean: clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all
