/*
** EPITECH PROJECT, 2019
** my_trans
** File description:
** bistro
*/

char symb_char(int i)
{
    char c[] = "()+-*/%";

    if (i == 0)
        return (c[0]);
    if (i == 1)
        return (c[1]);
    if (i == 2)
        return (c[2]);
    if (i == 3)
        return (c[3]);
    if (i == 4)
        return (c[4]);
    if (i == 5)
        return (c[5]);
    return (c[6]);
}

char *my_trans(char *str, char const *num, char const *symb)
{
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; num[j] != '\0'; j++) {
            if (str[i] == num[j]) {
                str[i] = j + '0';
                break;
            }
            if (str[i] == symb[j]) {
                str[i] = symb_char(j);
                break;
            }
        }
    }
    return (str);
}
