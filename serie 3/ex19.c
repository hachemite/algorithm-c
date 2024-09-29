#include <stdio.h>

int Position(int tableau[], int taille, int entier) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == entier) {
            return i;
        }
    }
    return -1;
}

int main() {
    int taille, entierRecherche;


    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];


    printf("Saisir les elements du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez l'entier à rechercher : ");
    scanf("%d", &entierRecherche);

    int position = Position(tableau, taille, entierRecherche);

    if (position != -1) {
        printf("L'entier %d a été trouvé à la position %d dans le tableau.\n", entierRecherche, position);
    } else {
        printf("L'entier %d n'a pas été trouvé dans le tableau.\n", entierRecherche);
    }

    return 0;
}
