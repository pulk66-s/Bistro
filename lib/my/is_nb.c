/*
** EPITECH PROJECT, 2020
** Day08
** File description:
** Function that find a char
*/

int is_nb(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return (0);
        }
    }
    return (1);
}
