#include "lib.h"
int main()
{
    int n;
    printf("Cate elemente vrei sa aiba vectorul?\n");
    scanf("%d", &n);
    Pair *map = creare(n);

    afisare(n, map);

    return 0;
}