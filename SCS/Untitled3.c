#include <stdio.h>

int main() {
    int N;

    // Saisie de la valeur de N
    printf("Entrez la valeur de N : ");
    scanf("%d", &N);

    // Affichage du triangle isoc�le
    printf("Triangle isoc�le de %d lignes :\n", N);
    for (int i = 1; i <= N; ++i) {
        // Affichage des espaces � gauche
        for (int j = 1; j <= N - i; ++j) {
            printf(" ");
        }

        // Affichage des �toiles
        for (int k = 1; k <= 4 * i -1 ; ++k) {
            printf("*");
        }

        // Passage � la ligne pour la prochaine rang�e
        printf("\n");
    }

    return 0;
}

