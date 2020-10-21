/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** function that display any string
*/

int my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        my_putchar(str[i]);
    }
    return (0);
}
