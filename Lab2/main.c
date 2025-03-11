#include "lib.h"

// VERSIUNEA 2

int main(void)
{

    Piesa p = citire_element();

    display_elem(&p);
    printf("------------------------------\n");

    Piesa *v = (Piesa *)malloc(sizeof(char) * 2);

    if (v == NULL)
    {
        printf("Not good\n");
        return 1;
    }

    for (int i = 0; i < 2; i++)
    {
        v[i] = citire_element();
    }

    display_vector(v);
    printf("------------------------------\n");
    char new_dem[20];

    scanf("%s", new_dem);

    modificare_denumire(new_dem, &v[0]);

    printf("------------------------------\n");

    Piesa p2 = citire_element();

    printf("--------------SE COPIAZA----------------\n");

    copie_profunda(&p, &p2);
    display_elem(&p);

    printf("------------------------------\n");
    printf("---------SE STERGE PRIMU---------------------\n");
    v = delete (v, 0, 2);
    display_vector(v);

    return 0;
}