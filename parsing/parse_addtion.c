/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** Parse addition function
*/

#include <stdlib.h>
#include <my.h>
#include <stdio.h>

char *get_before(char *str, int n)
{
    char *b_str = malloc(sizeof (char) * n);

    for (int i = 0 ; i < n ; i++) {
        b_str[i] = str[i];
    }
    return (b_str);
}

char *get_after(char *str, int n)
{
    char *a_str = malloc(sizeof (char) * (my_strlen(str) - n));

    for (int i = n ; str[i + 1] >= '0' && str[i + 1] <= '9' ; i++) {
        a_str[i - n] = str[i + 1];
    }
    return (a_str);
}

char *parse_addition(char *str)
{
    char *n1 = malloc(sizeof (char) * 256);
    char *n2 = malloc(sizeof (char) * 256);
    int i = 0;
    char *str_all = malloc(sizeof (char) * 256);

    for (; str[i] != '\0' && str[i] != '+' ; i++);
    n1 = get_before(str, i);
    n2 = get_after(str, i);
    for (int i = my_strlen(n1) + my_strlen(n2) + 1 ; str[i] != '\0' ; i++) {
        str_all[i - (my_strlen(n1) + my_strlen(n2) + 1)] = str[i];
    }
}
