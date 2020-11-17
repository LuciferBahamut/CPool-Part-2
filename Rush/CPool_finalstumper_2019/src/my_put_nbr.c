/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Display numbers
*/

int my_putchar(char c);

int my_put_nbr(int n)
{
    if (n == -2147483648)
    {
        my_putchar('-');
        my_putchar('2');
        n = 147483648;
    }
    if (n < 0)
    {
        n = -n;
        my_putchar('-');
    }
    if (n >= 10)
        my_put_nbr(n / 10);
    my_putchar(n % 10 + '0');
    return (0);
}
