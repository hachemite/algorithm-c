#include <stdio.h>

int main() {
    int N, nombre, somme = 0, produit = 1;
    float moyenne;

    // a) Utilisation de while
    printf("a) Utilisation de while\n");
    printf("Entrez la valeur de N (entre 1 et 10) : ");
    scanf("%d", &N);

    while (N < 1 || N > 10) {
        printf("La valeur de N doit être entre 1 et 10. Réessayez : ");
        scanf("%d", &N);
    }

    for (int i = 0; i < N; ++i) {
        printf("Entrez le nombre %d : ", i + 1);
        scanf("%d", &nombre);

        somme += nombre;
        produit *= nombre;
    }

    moyenne = (float)somme / N;

    printf("Somme : %d\n", somme);
    printf("Produit : %d\n", produit);
    printf("Moyenne : %.2f\n", moyenne);

    return 0;
}
