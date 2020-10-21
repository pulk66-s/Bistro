/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** include
*/

#ifndef __INCLUDE_H__
#define __INCLUDE_H__

char *addition(char *str1, char *str2);
void parse_addition(char *str);
void parse(char *str);
char *display_nb(char *n1, char *n2, int max_n);
char *display_neg_nb(char *str1, char *str2);
char *add_zero(char *n);
int get_max_size(char *str1, char *str2);
char *get_true(char *str, int size);
char *parse_bracket(char *str);
char *parse_multiply(char *str);
char *get_before(char *str, int n);
char *get_after(char *str, int n);
char *infini_multiply(char *str1, char *str2);
char *infinadd(char *str1, char *str2);
char *infini_sous(char *str1, char *str2);
int is_zero(char *str);
char *put_minus(char *str);
int error(int argc, char **argv);

#endif
