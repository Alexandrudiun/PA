#include "lib.h"
int main()
{
    int n;
    printf("cate elem are vectorul tau?\n");
    scanf("%d", &n);
    flot *vector = creare(n);
    printf("introdu elementele vectorului tau\n");
    citire_in_vector(vector, n);
    afisare(n, vector);
    printf("\n");
    quick(vector, 0, n - 1);
    afisare(n, vector);
} // 8 1 3 4 2 3 6 4 4
