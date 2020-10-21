/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** main function
*/

#include <my.h>
#include "include/include.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (error(argc, argv) == 84) {
        return (84);
    }
    if (argc < 1) {
        my_putstr("wrong nb of parameters");
    }
    char *str = infini_multiply("-5", "5");
    my_putstr(str);
}
