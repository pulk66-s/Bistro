/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** function that reverse a string
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int end = my_strlen(str) - 1;
    char c;

    for (int i = 0 ; i < end ; i++, end--) {
        c = str[i];
        str[i] = str[end];
        str[end] = c;
    }
    return (str);
}
