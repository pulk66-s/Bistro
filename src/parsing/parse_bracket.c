/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** all parse file
*/

#include <stdlib.h>
#include "../include/include.h"

static int exist(char *str, char c)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] == c) {
            return (1);
        }
    }
    return (0);
}

char *parse_bracket(char *str)
{
    int b1 = 0;
    int b2 = 0;
    char *s = malloc(sizeof (char) * 256);

    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] == '(')
            b1 = i;
        if (str[i] == ')') {
            b2 = i;
            break;
        }
    }
    for (int j = b1 + 1 ; j < b2 ; j++) {
        s[j - b1 - 1] = str[j];
    }
    if (exist(s, '(') == 1) {
        return (parse_bracket(s));
    } else {
        return (s);
    }
}
