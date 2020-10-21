/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** include
*/

#include <stdlib.h>

int my_strlen(char *str);

static int tab_length(char **tab)
{
    int tab_l = 0;

    for (int i = 1 ; tab[i] != NULL ; i++) {
        tab_l += my_strlen(tab[i]);
    }
    return (tab_l);
}

char *tab_tab_to_str(char **tab)
{
    char *str = malloc(sizeof (char) * tab_length(tab));
    int letter = 0;

    for (int i = 1 ; tab[i] != NULL ; i++) {
        for (int j = 0 ; tab[i][j] != '\0' ; j++) {
            str[letter] = tab[i][j];
            letter++;
        }
    }
    return (str);
}
