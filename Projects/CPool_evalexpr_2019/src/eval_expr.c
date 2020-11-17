/*
** EPITECH PROJECT, 2019
** eval_expr.c
** File description:
** evalexpr
*/

#include "../include/my.h"

int eval_expr(char const *str)
{
    int result = 0;
    int add = 0;
    int sous = 0;
    int mult = 0;
    int div = 0;
    int mod = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+')
            add = str[i -1] + str [i + 1] - '0';
        if (str[i] == '-')
            sous = str[i -1] - str [i + 1] + '0';
        if (str[i] == '*')
            mult = str[i -1] * str [i + 1] + '0';
        if (str[i] == '/')
            div = str[i -1] / str [i + 1] + '0';
        if (str[i] == '%')
            mod = str[i -1] % str [i + 1] + '0';
    }
    return(result = add + sous + mult + div + mod - '0');
}
