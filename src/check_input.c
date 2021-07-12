/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-106bombyx-gilbert.badiabo
** File description:
** check_input.c
*/

#include "../include/bombyx.h"

int check_input(int ac, char **av)
{
    double k;

    if (ac != 3 && ac != 4)
        return 84;
    if (ac == 4) {
        if (my_str_isnum(av[1]) == -1 || my_str_isnum(av[2]) == -1 ||
            my_str_isnum(av[3]) == -1)
            return 84;
    }
    if (ac == 3)
    {
        if (my_str_isnum(av[1]) == -1 || my_str_isnum(av[2]) == -1)
            return 84;
    }
    k = atof(av[2]);
    if (ac == 3)
        if (k < 1 || k > 4)
            return 84;
    return 0;
}