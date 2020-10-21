/*
** EPITECH PROJECT, 2020
** Bootstrap Elvaxpr
** File description:
** Criterion test for tab_tab_to_str
*/

#include <criterion/criterion.h>
#include <my.h>

Test(tab_tab_to_str, is_define)
{
    char *t[] = {"Hello", "World", NULL};
    tab_tab_to_str(t);
}

Test(tab_tab_to_str, is_working1)
{
    char *t[] = {"./program", "Hello", " Fucking ", "World", NULL};
    char *r = tab_tab_to_str(t);
    cr_assert_str_eq(r, "Hello Fucking World");
}

Test(tab_tab_to_str, is_working2)
{
    char *t[] = {"./program", "Hello", "World", NULL};
    char *r = tab_tab_to_str(t);
    cr_assert_str_eq(r, "HelloWorld");
}
