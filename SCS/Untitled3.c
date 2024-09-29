#include <stdio.h>

int main() {
    int N;

    // Saisie de la valeur de N
    printf("Entrez la valeur de N : ");
    scanf("%d", &N);

    // Affichage du triangle isocèle
    printf("Triangle isocèle de %d lignes :\n", N);
    for (int i = 1; i <= N; ++i) {
        // Affichage des espaces à gauche
        for (int j = 1; j <= N - i; ++j) {
            printf(" ");
        }

        // Affichage des étoiles
        for (int k = 1; k <= 4 * i -1 ; ++k) {
            printf("*");
        }

        // Passage à la ligne pour la prochaine rangée
        printf("\n");
    }

    return 0;
}

