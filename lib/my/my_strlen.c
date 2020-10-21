/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** len of a string
*/

int my_strlen(char const *str)
{
    int l = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        l++;
    }
    return (l);
}
