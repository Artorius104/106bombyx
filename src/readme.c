/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-106bombyx-gilbert.badiabo
** File description:
** readme.c
*/

#include "../include/bombyx.h"

int readme(void)
{
    write(1, "USAGE\n   ", 10);
    write(1, "./106bombyx n [k | i0 i1]\n", 27);
    write(1, "DESCRIPTION\n", 13);
    write(1, "    n       number of first generation individuals\n", 52);
    write(1, "    k       growth rate from 1 to 4\n", 37);
    write(1, "    i0      initial generation (included)\n", 43);
    write(1, "    i1      final generation (included)\n", 41);

    return 0;
}