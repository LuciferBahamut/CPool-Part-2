/*
** EPITECH PROJECT, 2019
** error handling
** File description:
** gestion des erreurs
*/

int char_error(char *str)
{
    char *character = "o-| /*\\ABC";
    for (int count = 0; str[count] != '\0'; count++)
        for (int c = 0; character[c] != '\0'; c++)
            if (str[count] == character[c])
                return (0);
    return (84);
}
