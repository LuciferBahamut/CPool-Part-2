/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** bistro
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}
