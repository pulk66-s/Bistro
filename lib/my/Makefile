##
## EPITECH PROJECT, 2020
## Infinadd
## File description:
## Makefile
##

CC		= gcc
SRC		= *.c
OBJ		= *.o

NAME	= libmy.a

CFLAGS	 = -W -Wall -Wextra -c

all:
	$(CC) $(CFLAGS) $(SRC)
	$(AR) rsc $(NAME) $(OBJ)
	cp my.h ../../include/
	cp $(NAME) ../

clean:
	$(RM) *~
	$(RM) *.o
	$(RM) #*#

fclean: clean
	$(RM) ../$(NAME)
	$(RM) $(NAME)
	$(RM) ../../include/my.h

re: fclean all
