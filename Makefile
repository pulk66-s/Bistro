##
## EPITECH PROJECT, 2020
## Infinadd
## File description:
## Makefile
##

CC			= gcc

LIBPATH		= src/lib/my

CALCSRC		= src/calculus/*.c
PARSESRC	= src/parsing/*.c
GLOBALSRC	= src/*.c

NAME		= parse

CFLAGS	 	= -W -Wall -Wextra -Isrc/include -Lsrc/lib -lmy -g3

all:
	make -C $(LIBPATH) all
	$(CC) $(GLOBALSRC) $(PARSESRC) $(CALCSRC) $(CFLAGS) -o $(NAME)

clean:
	make -C $(LIBPATH) clean
	$(RM) *~
	$(RM) *.o
	$(RM) #*#

fclean: clean
	make -C $(LIBPATH) fclean
	$(RM) $(NAME)

re: fclean all
