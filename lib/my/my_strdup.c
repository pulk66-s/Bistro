/*
** EPITECH PROJECT, 2020
** Day08
** File description:
** function that duplicate a string
*/

#include <stdlib.h>

int my_strl(char const *str)
{
    if (str[0] == '\0') {
        return (0);
    }
    return (1 + my_strl(str + 1));
}

char *my_strdup(char const *str)
{
    char *t;
    int i = 0;

    t = malloc(sizeof (char) * (my_strl(str) + 1));
    while (str[i] != '\0') {
        t[i] = str[i];
        i++;
    }
    t[i] = '\0';
    return (t);
}
