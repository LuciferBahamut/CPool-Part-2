/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** bistro
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"

char *eval_expr(char const *base, char const *ops,
                char *expr, unsigned int size);
char *gest_str(char const *expr);
char *infiniadd(char *nb1, char *nb2);
char *infinidiv(char *nb1, char *nb2);
char *infinimod(char *nb1, char *nb2);
char *infinimult(char *nb1, char *nb2);
char *infinisub(char *nb1, char *nb2);
int my_atoi(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
char *my_trans(char *str, char const *num, char const *symb);
char *gest_prio(char **str);
char *gest_num(char **str);
char *infin(char *str1, char *str2, int i, int j);
char *infini(char *str1, char *str2, int i, int j);
int my_strcmp(char *s1, char *s2);

#endif
