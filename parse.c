/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** all parse file
*/

#include "include/include.h"
#include <stdio.h>

static int is_nb(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return (0);
        }
    }
    return (1);
}

void parse(char *str)
{
    while (is_nb(str) == 0) {
        str = parse_bracket(str);
    }
}
