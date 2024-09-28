#include <stdio.h>
#include <stdlib.h>
#include "Tri_insertion.h"

void TriInserstion(int length, int *tab)
{
    for (int j = 1; j < length; j++)
    {
        int carte = tab[j];
        int i = j - 1;
        while(i>=0 && tab[i]>carte){
            tab[i+1]=tab[i];
            i-=1;
        }
        tab[i+1]=carte;
    }
}

void TriInsertionRecurcif(int i,int length,int *tab){
    if(i<=0){
        return;
    }

    TriInsertionRecurcif(i-1,length,tab);
    int carte= tab[i];
    int j=i-1;
    while(j>=0 && tab[j]>carte){
        tab[j+1]=tab[j];
        j--;
    }
    tab[j+1]=carte;
    
}