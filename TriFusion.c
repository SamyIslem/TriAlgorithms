#include <stdio.h>
#include <stdlib.h>
#include "TriFusion.h"

void fusion(int *tab, int debut, int milieu, int fin)
{
    int n1 = milieu - debut + 1;
    int n2 = fin - milieu;
    int gauche[n1];
    int droite[n2];

    for (int i = 0; i < n1; i++)
    {
        gauche[i] = tab[debut + i];
    }
    for (int j = 0; j < n2; j++)
    {
        droite[j] = tab[milieu + 1 + j];
    }
    int n3 = n1 + n2;
    int i = 0;
    int j = 0;
    int k = debut;

    while (i < n1 && j < n2)
    {
        if (gauche[i] < droite[j])
        {
            tab[k] = gauche[i];
            i++;
        }
        else
        {
            tab[k] = droite[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        tab[k] = gauche[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        tab[k] = droite[j];
        j++;
        k++;
    }
}

void TriFusion(int *tab, int debut, int fin)
{
    if (debut < fin)
    {
        int milieu = (debut + fin) / 2;
        TriFusion(tab, debut, milieu);
        TriFusion(tab, milieu + 1, fin);
        fusion(tab, debut, milieu, fin);
    }
}