#include <stdio.h>
#include <stdlib.h>


void triInsertion(int* tab, int taille) {
    int cle, j;
    for (int i = 1; i < taille; i++) {
        cle = tab[i];
        j = i - 1;

        while (j >= 0 && tab[j] > cle) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = cle;
    }
}

void remplirTableauAvecEntiersAleatoire(int* t, int taille, int MaxVal) {
    for (int i = 0; i < taille; ++i) {
        t[i] = rand() % MaxVal;
    }
}

int main() {
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int* t = (int*)malloc(taille * sizeof(int));

    if (t == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    remplirTableauAvecEntiersAleatoire(t, taille, 1000000);

    printf("Tableau non tri :\n");
    for (int i = 0; i < taille; ++i) {
        printf("%d ", t[i]);
    }

    triInsertion(t, taille);

    printf("\nTableau tri avec le tri par insertion :\n");
    for (int i = 0; i < taille; ++i) {
        printf("%d ", t[i]);
    }

    free(t);

    return 0;
}

