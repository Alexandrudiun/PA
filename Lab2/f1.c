#include "lib.h"

Piesa citire_element()
{
    Piesa p;

    char buffer[30];

    printf("Introdu denumirea:\n");

    scanf("%s", buffer);
    p.denumire = malloc(sizeof(char) * strlen(buffer) + 1);

    strcpy(p.denumire, buffer);

    printf("Introdu pretul:\n");
    scanf("%d", &p.pret);

    printf("Introdu un cod:\n");
    scanf("%s", p.cod);

    return p;
}

void display_elem(Piesa *p)
{

    printf("%s\n", p->denumire);
    printf("%s\n", p->cod);
    printf("%d\n", p->pret);
}

void display_vector(Piesa *v)
{
    for (int i = 0; i < 2; i++)
    {
        display_elem(&v[i]);
    }
}

void modificare_denumire(char *new_dem, Piesa *p)
{

    p->denumire = (char *)malloc(sizeof(char) * strlen(new_dem) + 1);

    strcpy(p->denumire, new_dem);
}

void copie_profunda(Piesa *p1, Piesa *p2)
{
    char *p = p1->denumire;
    *p1 = *p2;
    p1->denumire = p;
    free(p1->denumire);
    p1->denumire = (char *)malloc(sizeof(char) * strlen(p2->denumire) + 1);
    strcpy(p1->denumire, p2->denumire);
}

Piesa *delete(Piesa *v, int indice, int *dimensiune_initiala)
{
    for (int i = 0; i < 2; i++)
    {
        if (i == indice)
            for (int j = i; j < 2; j++)
            {
                copie_profunda(&v[i], &v[j]);
                *dimensiune_initiala = *dimensiune_initiala - 1;
                return realloc(v, (sizeof(Piesa) * (*dimensiune_initiala)));
            }
    }
}

void no_duplicates(Piesa *v, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (v[i]->pret == v[j].pret)
                ok = 1;
            if (strcmp(v[i]->denumire, v[j].denumire))
                ok1 = 1;
            if (strcmp(v[i]->denumire, v[j].denumire))
                ok2 = 1;
        }
    }
}
