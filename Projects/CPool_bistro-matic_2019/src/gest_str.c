/*
** EPITECH PROJECT, 2019
** gest_str
** File description:
** eval expr
*/

#include "my.h"

char *gest_str(char const *expr)
{
    char *str = malloc(sizeof(char) * my_strlen(expr) + 1);
    int j = 0;

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] != ' ') {
            str[j] = expr[i];
            j++;
        }
    }
    return (&str);
}
