/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** error file
*/

#include <unistd.h>

static int is_nb_or_op(char c)
{
    if ((c < '0' || c > '9') && c != '+' && c != '-' && c != '*' &&
            c != '/'&& c != '%') {
        write(2, "wrong input\n", 12);
        return (84);
    }
    return (1);
}

static int good_parantheses(char *str)
{
    int nb_p_open = 0;
    int nb_p_closed = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] == '(')
            nb_p_open++;
        if (str[i] == ')')
            nb_p_closed++;
    }
    return (nb_p_open == nb_p_closed ? 1 : 84);
}

int error(int argc, char **argv)
{
    if (argc != 2) {
        write(2, "wrong nb of parameters\n", 12);
        return (84);
    }
    for (int i = 0 ; argv[1][i] != '\0' ; i++) {
        if (is_nb_or_op(argv[1][i]) == 84) {
            return (84);
        }
    }
    if (good_parantheses(argv[1]) == 84) {
        write(2, "wrong nb of parantheses\n", 25);
        return (84);
    }
    return (1);
}
