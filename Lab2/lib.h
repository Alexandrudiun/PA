#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

Piesa citire_element();
void display_elem(Piesa *p);
void display_vector(Piesa *v);
void modificare_denumire(char *new_dem, Piesa *p);
void copie_profunda(Piesa *p1, Piesa *p2);
Piesa *delete(Piesa *v, int indice, int *dimensiune_initiala);