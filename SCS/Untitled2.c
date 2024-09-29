#include <stdio.h>

int main() {
    // Affichage de la table des produits pour N variant de 1 à 10
    printf("Table des produits pour N variant de 1 à 10 :\n");
    for (int N = 1; N <= 10; ++N) {
        printf("\nTable des produits pour N = %d :\n", N);
        for (int i = 1; i <= 10; ++i) {
            printf("%d x %d = %d\n", N, i, N * i);
        }
    }

    return 0;
}

