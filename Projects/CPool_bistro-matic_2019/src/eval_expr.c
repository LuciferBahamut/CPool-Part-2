/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** eval expr
*/

#include "my.h"

char *gest_op(char **str)
{
    char *nb = gest_prio(str);
    char op;
    while (**str != '\0' || **str != ')')
    {
        op = **str;
        if (op == '+') {
            (*str)++;
            nb = infiniadd(nb, gest_prio(str));
        } else if (op == '-') {
            (*str)++;
            nb = infinisub(nb, gest_prio(str));
        } else
            return (nb);
    }
    return (nb);
}

char *gest_prio(char **str)
{
    char *nb = gest_num(str);
    char op = **str;

    while (**str != '\0') {
        if (op != '%' && op != '*' && op != '/')
            return (nb);
        (*str)++;
        if (op == '%')
            nb = infinimod(nb, gest_num(str));
        else if (op == '/')
            nb = infinidiv(nb, gest_num(str));
        else
            nb = infinimult(nb, gest_num(str));
        op = **str;
    }
    return (nb);
}

char *gest_num(char **str)
{
    char *n = malloc(my_strlen(*str));
    int j = 0;

    if (**str == '(') {
        (*str)++;
        n = (gest_op(str));
        (*str)++;
    } else if (**str == '-') {
        (*str)++;
        n[j] = '-';
        j++;
    }
    while (**str >= '0' && **str <= '9') {
        n[j] = **str;
        (*str)++;
        j++;
    }
    return (n);
}

char *eval_expr(char const *base, char const *ops, char *expr,
        unsigned int size)
{
    char *str = my_trans(expr, base, ops);

    (void)size;
    return (gest_op(&str));
}
