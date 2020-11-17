/*
** EPITECH PROJECT, 2019
** infinimult
** File description:
** bistro
*/

#include "my.h"

char *my_str(char *str, int k)
{
    if(str[k] == 0)
        str[k] = '0';
    return (str);
}

int check_symb(char *nb1, char *nb2)
{
    int s = 0;

    if (nb1[0] == '-')
        s += 1;
    if (nb2[0] == '-')
        s += 10;
    return (s);
}

char *infinimult2(char *nb1, char *nb2, int s)
{
    char *str = malloc(my_strlen(nb1) + my_strlen(nb2) + 1);
    unsigned long tmp = 0;
    int k;

    for (int i = my_strlen(nb1) - 1; i >= 0; i--) {
        k = my_strlen(nb1) - i - 1;
        for (int j = my_strlen(nb2) - 1; j >= 0; j--, k++) {
            str = my_str(str, k);
            tmp = tmp + ((nb1[i] - '0') * (nb2[j] - '0')) + (str[k] - '0');
            str[k] = tmp % 10 + '0';
            tmp /= 10;
        }
        for (; tmp > 0; k++, tmp /= 10) {
            str = my_str(str, k);
            tmp = tmp + (str[k] - '0');
            str[k] = tmp % 10 + '0';
        }
    }
    if (s == 10 || s == 1)
        str[k] = '-';
    return (str);
}

char *infinimult(char *nb1, char *nb2)
{
    int s = check_symb(nb1, nb2);

    if (s % 10 == 1)
        nb1++;
    if (s / 10 == 1)
        nb2++;
    return (my_revstr(infinimult2(nb1, nb2, s)));
}
