##
## EPITECH PROJECT, 2020
## Infinadd
## File description:
## Makefile
##

CC		= gcc
SRC		= *.c

NAME	= parse

CFLAGS	 = -W -Wall -Wextra -Iinclude -Llib -lmy -g3

all:
	make -C lib/my all
	$(CC) $(SRC) calculus/$(SRC) parsing/$(SRC) $(CFLAGS) -o $(NAME)

clean:
	make -C lib/my clean
	$(RM) *~
	$(RM) *.o
	$(RM) #*#

fclean: clean
	make -C lib/my fclean
	$(RM) $(NAME)

re: fclean all
