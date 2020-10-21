/*
** EPITECH PROJECT, 2020
** Infinadd
** File description:
** main function
*/

#include <unistd.h>
#include <my.h>
#include "../include/include.h"

int get_max_size(char *str1, char *str2)
{
    if (my_strlen(str1) > my_strlen(str2))
        return (my_strlen(str1));
    else
        return (my_strlen(str2));
    return (0);
}

char *infinadd(char *str1, char *str2)
{
    char *n1 = str1;
    char *n2 = str2;

    if (n1[0] != '-' && n2[0] != '-') {
        return (display_nb(n1, n2, get_max_size(n1, n2)));
    } else if (n1[0] == '-' && n2[0] == '-') {
        return (display_nb(++n1, ++n2, get_max_size(n1, n2)));
    } else {
        return (display_neg_nb(n1, n2));
    }
    return (0);
}
