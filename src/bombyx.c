/*
** EPITECH PROJECT, 2020
** B-MAT-200-PAR-2-1-106bombyx-gilbert.badiabo
** File description:
** bombyx.c
*/

#include "../include/bombyx.h"

void first_case(double n, double k)
{
    int count = 1;

    while (count <= 100) {
        if (count > 1)
            n = k * n * ((1000 - n) / 1000);
        printf("%d %.2f\n", count, n);
        count++;
    }
}

void second_case(double n, double i0, double i1)
{
    int count = 1;
    double k = 1;

    while (k <= 4) {
        while (count < i0) {
            if (count > 1)
                n = k * n * ((1000 - n) / 1000);
            count++;
        }
            printf("%.2f %.2f\n", k, n);
        while (count <= i1) {
            n = k * n * ((1000 - n) / 1000);
            printf("%.2f %.2f\n", k, n);
            count++;
        }
        k += 0.01;
        count = 1;
    }
}