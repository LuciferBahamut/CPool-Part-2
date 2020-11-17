/*
** EPITECH PROJECT, 2019
** task06
** File description:
** compare str
*/

#include "my.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    if (my_strlen(s1) < my_strlen(s2))
        return (-1);
    if (my_strlen(s1) > my_strlen(s2))
        return (1);
    while (s1[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    while (s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
