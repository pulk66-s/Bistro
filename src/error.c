/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** error file
*/

int error(int argc, char **argv)
{
    if (argc != 2)
        return (84);
    for (int i = 0 ; argv[1][i] != '\0' ; i++) {
        if (argv[1][i] < '0' || argv[1][i] > '9') {
            if (argv[1][i] != '+' && argv[1][i] != '-' && argv[1][i] != '/' && argv[1][i] != '%' && argv[1][i] != ' ') {
                return (84);
            }
        }
    }
    return (83);
}
