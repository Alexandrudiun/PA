#include "lib.h"

Pair *creare(int n)
{
    Pair *p = malloc(sizeof(Pair) * n);
    if (p == NULL)
        return NULL;
    else
        return p;
}

void afisare(int n, Pair *p)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", p[i].key);
    }
}