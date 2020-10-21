/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** all parse file
*/

#include <stdlib.h>
#include "../include/include.h"
#include <my.h>

char *parse_multiply(char *str)
{
    char *n1 = malloc(sizeof (char) * 256);
    char *n2 = malloc(sizeof (char) * 256);
    int i = 0;
    char *str_all = malloc(sizeof (char) * 256);

    for (; str[i] != '\0' && str[i] != '*' ; i++);
    n1 = get_before(str, i);
    n2 = get_after(str, i);
    for (int i = my_strlen(n1) + my_strlen(n2) + 1 ; str[i] != '\0' ; i++) {
        str_all[i - (my_strlen(n1) + my_strlen(n2) + 1)] = str[i];
    }

}
