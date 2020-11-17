/*
** EPITECH PROJECT, 2019
** main
** File description:
** infinadd
*/

#include <stdlib.h>
#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    
    for (; str[i] != '\0'; i++);
    return (i);
}

char infin_add(char *nb1, char *nb2)
{
    int len = (my_strlen(nb1) + my_strlen(nb2));
    char *result = malloc((len + 1) * (sizeof(char)));
    int j = 0;
    int i = 0;
    
    for(j = 0; nb1[i] != '\0' && nb2[i] != '\0'; j++) {
        for(i = 0; nb1[i] != '\0' && nb2[i] != '\0'; i++) {
            result[j] = nb1[i] + nb2[i] - '0';
        }
    }
    result[j] = '\0';    
    return (my_putstr(result));
}

int main(int ac, char **av)
{
    if(ac != 3)
        return (84);
    infin_add(av[1], av[2]);
    return (0);
}
