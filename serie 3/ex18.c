#include <stdio.h>
#include <stdbool.h>

bool b;

bool f(int t[], int n) {
    for (int i = 0; i < n; i++) {
        if (t[i] >= 0 && t[i] <= 10) {
            return true;
        }
    }
    return false;
}

int main() {
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];

    printf("Saisir les elements du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    bool resultat = f(tableau, taille);

    if (resultat) {
        printf("Il existe une valeur entre 0 et 10 dans le tableau.\n");
    } else {
        printf("Aucune valeur entre 0 et 10 n'a été trouvée dans le tableau.\n");
    }

    return 0;
}
