/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** bistro
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i])
    {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
