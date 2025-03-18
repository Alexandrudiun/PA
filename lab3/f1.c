#include "lib.h"

flot *creare(int n)
{
    flot *p = malloc(sizeof(flot) * n);
    if (p == NULL)
        return NULL;
    else
        return p;
}

void afisare(int n, flot *p)
{
    for (int i = 0; i < n; i++)
    {
        printf("%f  ", p[i].val);
    }
}

void swapf(zdrang *a, zdrang *b)
{
    zdrang t = *a;
    *a = *b;
    *b = t;
}

void swap(flot *a, flot *b)
{
    flot aux = *a;
    *a = *b;
    *b = aux;
}

void citire_in_vector(flot v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &v[i].val);
    }
}