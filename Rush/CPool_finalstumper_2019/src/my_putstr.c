/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** display string
*/

int my_putchar(char c);

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
