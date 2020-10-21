/*
** EPITECH PROJECT, 2020
** Day8
** File description:
** function that find the size
*/

int get_l(char const *str)
{
    int len = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        len++;
    }
    return (len);
}
