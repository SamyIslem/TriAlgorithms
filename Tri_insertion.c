#include <stdio.h>
#include <stdlib.h>
#include "Tri_insertion.h"

void TriInserstion(int *tab, int legnth)
{
    for (int j = 1; j < legnth; j++)
    {
        int carte = tab[j];
        int i = j - 1;
        while(i>0 & tab[i]>carte){
            tab[i+1]=tab[i];
            i-=1;
        }
        tab[i+1]=carte;
    }
}