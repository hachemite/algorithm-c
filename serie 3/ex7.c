#include<stdio.h>

int main() {
    int negatif = 0;
    int ligne, colonne;

    printf("Entrez la taille de la matrice : ");
    scanf("%d", &ligne);
    scanf("%d", &colonne);

    int matrice[ligne][colonne];

    printf("Entrez les éléments de la matrice :\n");
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("Element %d,%d : ", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }

    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            if (matrice[i][j] < 0) {
                negatif = 1;
                break;
            }
        }
        if (negatif) {
            break;
        }
    }

    if (negatif == 0)
        printf("La matrice contient que des éléments positifs.\n");
    else
        printf("La matrice contient des éléments négatifs.\n");

    return 0;
}
