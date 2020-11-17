/*
** EPITECH PROJECT, 2019
** infin
** File description:
** bistro
*/

#include "my.h"

char *infin(char *str1, char *str2, int i, int j)
{
    char *str = malloc(i + j + 3);
    int k = 0;
    int tmp = 0;
    for (; i >= 0 && j >= 0; i--, j--, k++) {
        tmp = (str1[i] - '0' + str2[j] - '0') + tmp;
        str[k] = tmp % 10 + '0';
        tmp /= 10;
    }
    for (;i >= 0; i--, k++) {
        tmp = str1[i] - '0' + tmp;
        str[k] = tmp % 10 + '0';
        tmp /= 10;
    }
    for (;j >= 0; j--, k++) {
        tmp = str2[j] - '0' + tmp;
        str[k] = tmp % 10 + '0';
        tmp /= 10;
    }
    if (tmp != 0)
        str[k] = tmp + '0';
    return (my_revstr(str));
}

char *infiniadd(char *nb1, char *nb2)
{
    if (nb1[0] == '-' && nb2[0] == '-') {
        nb2++;
        return (infinisub(nb1, nb2));
    }
    if (nb1[0] == '-') {
        nb1++;
        return (infini(nb2, nb1, my_strlen(nb2) - 1, my_strlen(nb1) - 1));
    }
    if (nb2[0] == '-') {
        nb2++;
        return (infini(nb1, nb2, my_strlen(nb1), my_strlen(nb2)));
    }
    return (infin(nb1, nb2, my_strlen(nb1) - 1, my_strlen(nb2) - 1));
}
