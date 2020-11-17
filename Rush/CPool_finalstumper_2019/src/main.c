/*
** EPITECH PROJECT, 2019
** main
** File description:
** main rush3
*/

#include <unistd.h>

void rush3(char *str);
int char_error(char *str);
void my_putchar(char c);

int main(void)
{
    int BUFF_SIZE = 24000;
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;

    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    if (char_error(buff) == 84)
        return (84);
    rush3(buff);
    my_putchar('\n');
    return (0);
}
