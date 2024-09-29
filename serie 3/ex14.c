#include <stdio.h>

float Puissance(float x, int N) {
    float resultat = 1.0;

    for (int i = 0; i < N; i++) {
        resultat *= x;
    }

    return resultat;
}

int main() {
    float x;
    int N;

    printf("Entrez la valeur de x (réel) : ");
    scanf("%f", &x);

    printf("Entrez la valeur de N (entier positif) : ");
    scanf("%d", &N);

    float resultat = Puissance(x, N);
    printf("%.2f ^ %d = %.2f\n", x, N, resultat);

    return 0;
}
