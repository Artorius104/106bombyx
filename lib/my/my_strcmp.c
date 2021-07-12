/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_strcmp.c
*/

int  my_strcmp(char const *str, char const *cmp)
{
    int i;

    for (i = 0; str[i] != '\0' && cmp[i] != '\0' && str[i] == cmp[i]; i++);
    if (str[i] == '\0' && cmp[i] == '\0')
        return 0;
    else
        return str[i] - cmp[i];
}
