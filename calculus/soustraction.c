/*
** EPITECH PROJECT, 2020
** Infinadd
** File description:
** soustraction file
*/

#include <stdlib.h>
#include "../include/include.h"
#include <my.h>
#include <stdio.h>

static int get_greater_nb(char *str1, char *str2)
{
    str1 = str1[0] == '-' ? str1 + 1 : str1;
    str2 = str2[0] == '-' ? str2 + 1 : str2;
    for (int i = 0 ; str1[i] != '\0' ; i++) {
        if (str1[i] > str2[i]) {
            return (1);
        }
        else if (str1[i] < str2[i]) {
            return (-1);
        }
    }
    return (0);
}

static int get_neg(char *str1, char *str2)
{
    int neg;

    if (get_greater_nb(str1, str2) == 0) {
        return (0);
    }
    if (str1[0] == '-') {
        if (get_greater_nb(str1, str2) == 1) {
            neg = 1;
        } else {
            neg = 0;
        }
    } else {
        if (get_greater_nb(str1, str2) == -1) {
            neg = 1;
        } else {
            neg = 0;
        }
    }
    return (neg);
}

static char *minus(char *str1, char *str2)
{
    char *n1 = my_strdup(str1);
    char *n2 = my_strdup(str2);
    char *nf = my_strdup(str1);

    for (int i = 0 ; i < my_strlen(n1) ; i++) {
        for (int j = n2[i] - 48 ; j > 0 ; j--) {
            nf[i]--;
        }
        if (nf[i] < '0') {
            nf[i] += 10;
            nf[i - 1]--;
        }
    }
    return (nf);
}

char *display_neg_nb(char *str1, char *str2)
{
    char *nb;
    int neg = get_neg(str1, str2);

    str1 = str1[0] == '-' ? str1 + 1 : str1;
    str2 = str2[0] == '-' ? str2 + 1 : str2;
    if (my_strlen(str1) > my_strlen(str2))
        str2 = get_true(str2, my_strlen(str1));
    else if (my_strlen(str1) < my_strlen(str2))
        str1 = get_true(str1, my_strlen(str2));
    str1 = add_zero(str1);
    str2 = add_zero(str2);
    nb = malloc(sizeof(char) * (get_max_size(str1, str2) + 1));
    if (get_greater_nb(str1, str2) == 1) {
        nb = 1 + minus(str1, str2);
    } else {
        nb = 1 + minus(str2, str1);
    }
    if (neg == 1)
        my_putchar('-');
    for (; nb[0] == '0' && my_strlen(nb) > 1 ; nb++);
    return (nb);
}
