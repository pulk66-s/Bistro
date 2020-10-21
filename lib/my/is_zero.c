/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** Infinimultiply
*/

int is_zero(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] != '0') {
            return (0);
        }
    }
    return (1);
}
