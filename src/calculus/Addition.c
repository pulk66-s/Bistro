/*
** EPITECH PROJECT, 2020
** Infinadd
** File description:
** Add functions for infin_add
*/

#include <stdlib.h>
#include <my.h>
#include <stdio.h>

char *get_true(char *str, int size)
{
    char *s = malloc(sizeof(char) * (size + 1));

    for (int i = 0 ; i < size - my_strlen(str) ; i++) {
        s[i] = '0';
    }
    int j = size - my_strlen(str);
    for (int k = 0 ; j < size ; j++, k++) {
        s[j] = str[k];
    }
    s[j] = '\0';
    return (s);
}

char *add_zero(char *n)
{
    char *t = malloc(sizeof (char) * (my_strlen(n) + 2));

    t[0] = '0';
    int i = 0;
    for (; n[i] != '\0' ; i++) {
        t[i + 1] = n[i];
    }
    t[i + 1] = '\0';
    return (t);
}

static char *add(char *n1, char *n2, int i)
{
    for (int j = n2[i] - 48 ; j > 0 ; j--) {
        n1[i]++;
    }
    if (n1[i] > '9') {
        n1[i] -= 10;
        n1[i - 1]++;
    }
    if (n1[0] != '0')
        n1 = add_zero(n1);
    return (n1);
}

char *display_nb(char *n1, char *n2, int max_n)
{
    char *nb = malloc(sizeof (char) * (max_n + 1));

    if (my_strlen(n1) > my_strlen(n2))
        n2 = get_true(n2, my_strlen(n1));
    else if (my_strlen(n1) < my_strlen(n2))
        n1 = get_true(n1, my_strlen(n2));
    n1 = add_zero(n1);
    n2 = add_zero(n2);
    for (int i = max_n ; i >= 0 ; i--) {
        nb = 1 + add(n1, n2, i);
    }
    return (nb);
}
