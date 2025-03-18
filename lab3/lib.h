#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
flot *creare(int n);
void afisare(int n, flot *p);
int partitionare(flot *v, int low, int high);
void swap(flot *a, flot *b);
void citire_in_vector(flot v[], int n);
void quick(flot *v, int low, int high);
void swapf(float *a, float *b);