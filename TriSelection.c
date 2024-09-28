#include <stdio.h>
#include <stdlib.h>
#include "TriSelection.h"

// Fonction pour permuter deux éléments du tableau
void permutation(int i, int j, int *tab) {
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

// Fonction pour trouver l'indice du minimum à partir de l'indice i
int imin(int i, int tab[], int length) {
    int imin = i;
    for (int j = i + 1; j < length; j++) {
        if (tab[j] < tab[imin]) {
            imin = j;
        }
    }
    return imin;
}

// Fonction de tri par sélection
void triSelection(int length, int *tab) {
    for (int i = 0; i < length - 1; i++) {
        int min = imin(i, tab, length);
        if (i != min) {
            permutation(i, min, tab);
        }
    }
}


void triSelectionRecurcif(int i,int length, int *tab){
    if(i< length){
        int min = imin(i, tab, length);
        if(i!=min){
            permutation(i, min, tab);
        }
    }else{
        return;
    }
    triSelectionRecurcif(i+1,length,tab);
}