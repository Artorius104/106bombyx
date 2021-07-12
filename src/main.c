/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-106bombyx-gilbert.badiabo
** File description:
** main.c
*/

#include "../include/bombyx.h"

int main(int ac, char *av[])
{
    double n;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return readme();
    if (check_input(ac, av) == 84)
        return 84;
    n = atof(av[1]);
    if (ac == 3)
        first_case(n, atof(av[2]));
    if (ac == 4)
        second_case(n, atof(av[2]), atof(av[3]));
    return 0;
}