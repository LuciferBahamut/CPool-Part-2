/*
** EPITECH PROJECT, 2019
** infinimod
** File description:
** bistro
*/

#include "my.h"

char *infinimod(char *nb1, char *nb2)
{
    char *reste = malloc(my_strlen(nb1) + 2);

    reste = infinisub(nb1, infinimult(nb2, infinidiv(nb1, nb2)));
    return (reste);
}
