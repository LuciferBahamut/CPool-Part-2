/*
** EPITECH PROJECT, 2019
** infinidiv
** File description:
** bistro
*/

#include "my.h"

int res_isneg(char *nb1, char *nb2)
{
    if (nb1[0] == '-' && nb2[0] != '-')
        return (1);
    if (nb1[0] != '-' && nb2[0] == '-')
        return (1);
    if (nb1[0] == '-' && nb2[0] == '-')
        return (0);
    return (0);
}

char *res_become_neg(char *src)
{
    char *dest = malloc(my_strlen(src) + 2);
    int i = 0;
    int j = 1;

    dest[0] = '-';
    while (src[i] != '\0') {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

char *infinidiv(char *nb1, char *nb2)
{
    char *diviseur = malloc(my_strlen(nb1) + 1);
    int i = 0;
    char *nnb1 = nb1;
    char *nnb2 = nb2;

    if (nb1[0] == '-')
        nb1 = nb1 + 1;
    if (nb2[0] == '-')
        nb2 = nb2 + 1;
    if (my_strcmp(nb1, nb2) < 0)
        return ("0");
    if (my_strcmp(nb1, nb2) == 0)
        return ("1");
    diviseur[i] = '1';
    while (my_strcmp(nb1, infinimult(diviseur, nb2)) >= 0) {
        diviseur = infiniadd(diviseur, "1");
    }
    diviseur = infinisub(diviseur, "1");
    if (res_isneg(nnb1, nnb2) == 1)
        diviseur = res_become_neg(diviseur);
    return (diviseur);
}
