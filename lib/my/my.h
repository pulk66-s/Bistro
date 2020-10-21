/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** lib header
*/

#ifndef __MY_H__
#define __MY_H__

int find_c(char c, char const *base_from);
int power(int n, int p);
int my_putchar(char c);
int my_putstr(char *str);
char *tab_tab_to_str(char **tab);
char *move_str(char *str, int n);
char *my_strncpy(char *dest, char *src, int n);
int my_strlen(char *str);
char *my_strcat(char *str, char *str2);
int get_l(char const *str);
char *my_revstr(char *str);
int is_nb(char *str);
char *my_strdup(char *str);
void str_swap(char *str1, char *str2);

#endif
