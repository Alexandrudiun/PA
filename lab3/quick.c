#include "lib.h"

int partitionare(flot *v, int low, int high)
{
    int mid = (high + low) / 2 + 1;
    zdrang val[3];
    val[0].val = v[high].val;
    val[1].val = v[low].val;
    val[2].val = v[mid].val;
    val[0].key = low;
    val[1].key = mid;
    val[2].key = high;

    for (int k = 0; k < 2; k++)
        for (int l = k; l < 2; l++)
        {
            if (val[k].val < val[l].val)
            {
                swapf(&val[k], &val[l]);
            }
        }

    float pivot = val[1].val;

    swap(&v[high], &v[val[1].key]);

    int i = low;

    for (int j = low; j <= high - 1; j++)
    {
        if (v[j].val > pivot)
        {
            swap(&v[i], &v[j]);
            i++;
        }
    }

    swap(&v[i], &v[high]);
    return i;
}

void quick(flot *v, int low, int high)
{
    if (low < high)
    {

        int pivot = partitionare(v, low, high);
        quick(v, low, pivot - 1);
        quick(v, pivot + 1, high);
    }
}
