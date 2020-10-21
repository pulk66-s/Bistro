/*
** EPITECH PROJECT, 2020
** Day08
** File description:
** Function that find a char
*/

int find_c(char c, char const *base_from)
{
    for (int i = 0 ; base_from[i] != '\0' ; i++) {
        if (c == base_from[i]) {
            return (i);
        }
    }
    return (1);
}
