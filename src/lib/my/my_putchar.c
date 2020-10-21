/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** print any char
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
