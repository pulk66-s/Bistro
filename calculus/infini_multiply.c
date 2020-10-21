/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** Infinimultiply
*/

#include "../include/include.h"
#include <my.h>
#include <stdlib.h>

static int is_greater(char *str1, char *str2)
{
    if (str1[0] == '-')
        return (is_greater(str1 + 1, str2));
    if (str2[0] == '-')
        return (is_greater(str1, str2 + 1));
    if (my_strlen(str1) > my_strlen(str2))
        return (1);
    if (my_strlen(str1) < my_strlen(str2))
        return (-1);
    if (str1[0] == '\0' && str2[0] == '\0')
        return (0);
    if (str1[0] > str2[0])
        return (1);
    if (str1[0] < str2[0])
        return (-1);
    if (str1[0] == str2[0])
        return (is_greater(str1 + 1, str2 + 1));
    return (-1);
}

static char *get_result(char *str1, char *str2)
{
    char *result = "0";

    for (char *chrono = str2 ; is_zero(chrono) == 0
            ; chrono = infinadd(chrono, "-1"))
        result = infinadd(result, str1);
    return (result);
}

char *put_minus(char *str)
{
    char *result = malloc(sizeof (char) * (my_strlen(str) + 2));

    result[0] = '-';
    for (int i = 0 ; str[i] != '\0' ; i++)
        result[i + 1] = str[i];
    return (result);
}

char *infini_multiply(char *str1, char *str2)
{
    char *result = "0";

    if (is_greater(str1, str2) == -1)
        str_swap(str1, str2);
    if (str1[0] == '-' && str2[0] == '-') {
        str1++;
        str2++;
    }
    if (str1[0] != '-' && str2[0] != '-')
        result = get_result(str1, str2);
    if (str1[0] == '-' || str2[0] == '-') {
        str1 = str1[0] == '-' ? str1 + 1 : str1;
        str2 = str2[0] == '-' ? str2 + 1 : str2;
        result = get_result(str1, str2);
        result = put_minus(result);
    }
    return (result);
}
