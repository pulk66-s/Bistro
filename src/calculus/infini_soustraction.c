/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** Infinimultiply
*/

#include "../include/include.h"
#include <my.h>
#include <stdlib.h>

char *infini_sous(char *str1, char *str2)
{
    if (str2[0] != '-') {
        str2 = put_minus(str2);
        return (put_minus(infinadd(str1, str2)));
    }
    if (str2[0] == '-')
        return (infinadd(str1, ++str2));
    return ("84");
}
