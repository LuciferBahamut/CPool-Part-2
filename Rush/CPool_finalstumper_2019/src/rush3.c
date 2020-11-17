/*
** EPITECH PROJECT, 2019
** rush3
** File description:
** say which rush1 was used
*/

#include <unistd.h>

void my_putchar(char c);
int my_putstr(char *str);
int my_put_nbr(int nb);

void print_result(int i, int j, int k)
{
    my_putstr("[rush1-");
    my_put_nbr(i);
    my_putstr("] ");
    my_put_nbr(k);
    my_putchar(' ');
    my_put_nbr(j);
}
void print_infinite_result(int i, int j, int k)
{
    print_result(i, j, k);
    my_putstr(" || ");
    print_result(i + 1, j, k);
    my_putstr(" || ");
    print_result(i + 2, j, k);
}

void rush345(char *str, int j, int k)
{
    int i = j * (k + 1) - k - 1;
    if (str[i] == 'C')
    {
        i += k - 1;
        if (str[i] == 'A')
            print_result(5, j, k);
        else
            print_result(3, j, k);
    }
    else
        print_result(4, j, k);
}

void rush3(char *str)
{
    int j = 0;
    int k = 0;
    int r = 0;

    for (int i = 0; str[i]; i++, j++) {
        for (k = 0; str[i] != '\n'; i++, k++) {
            if (str[i] == 'o' || str[i] == '-' || str[i] == '|')
                r = 1;
            if (str[i] == '/' || str[i] == '*' || str[i] == 92)
                r = 2;
            if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
                r = 3;
        }
    }
    if (r == 3 && (j == 1 || k == 1))
        print_infinite_result(r, j, k);
    else if (r == 3)
       rush345(str, j, k);
    else
        print_result(r, j, k);
}
