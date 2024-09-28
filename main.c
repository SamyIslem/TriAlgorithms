#include <stdio.h>
#include <stdlib.h>
#include "TriSelection.h"
#include "Tri_insertion.h"
#include "TriFusion.h"


int main() {
    int tableau[] = {64, 25, 12, 22, 11}; // Tableau à trier
    int length = sizeof(tableau) / sizeof(tableau[0]); // Calculer la longueur du tableau

    TriFusion(tableau,0,5);// Passer tableau sans &

    printf("Tableau trié :\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}