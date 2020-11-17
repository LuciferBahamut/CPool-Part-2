/*
** EPITECH PROJECT, 2019
** infinsub
** File description:
** bistro
*/

#include "my.h"

char *remove_zero(char *str)
{
    int i = my_strlen(str) - 1;

    while (str[i] == '0') {
        str[i] = '\0';
        i--;
    }
    return (str);
}

char *infini(char *str1, char *str2, int i, int j)
{
    char *str = malloc(i + j + 3);
    int k = 0;
    int tmp = 0;
    for (; i >= 0 && j >= 0; i--, j--, k++) {
        tmp = ((str1[i] - '0') - (str2[j] - '0')) - tmp;
        str[k] = tmp % 10 + '0';
        tmp /= 10;
    }
    for (;i >= 0; i--, k++) {
        tmp = str1[i] - '0' - tmp;
        str[k] = tmp % 10 + '0';
        tmp /= 10;
    }
    for (;j >= 0; j--, k++) {
        tmp = str2[j] - '0' - tmp;
        str[k] = tmp % 10 + '0';
        tmp /= 10;
    }
    if (tmp != 0)
        str[k] = tmp + '0';
    return (my_revstr(remove_zero(str)));
}

char *infinisub(char *nb1, char *nb2)
{
    char *str;
    int i = 0;
    if (nb1[0] == '-' && nb2[0] == '-') {
        nb1++;
        nb2++;
        return (infini(nb2, nb1, my_strlen(nb2) - 1, my_strlen(nb1) - 1));
    }
    if (nb2[0] == '-') {
        nb2++;
        return (infin(nb1, nb2, my_strlen(nb1) - 1, my_strlen(nb2) - 1));
    }
    if (nb1[0] == '-') {
        nb1++;
        str = infin(nb1, nb2, my_strlen(nb1) - 1, my_strlen(nb2) - 1);
        str = my_revstr(str);
        while (str[i] >= '0' && str[i] <= '9')
            i++;
        str[i] = '-';
        return (my_revstr(str));
    }
    return (infini(nb1, nb2, my_strlen(nb1) - 1, my_strlen(nb2) - 1));
}
