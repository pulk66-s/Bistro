/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** concat two string
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int	i = 0;
    char *str = malloc(sizeof (char) * (my_strlen(dest) + my_strlen(src) + 1));
    while (dest[i] != '\0') {
        str[i] = dest[i];
        i = i + 1;
    }
    for (int j = 0 ; src[j] != '\0' ; j++) {
        str[i] = src[j];
        i++;
    }
    str[i] = '\0';
    return (str);
}
